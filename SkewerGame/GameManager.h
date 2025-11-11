#pragma once
#include "IState.h"

#ifndef COUNTDOWN_TIME
#define COUNTDOWN_TIME 5000	// 기본 시작 타이머 (5초)

class GameManager : public IState
{
protected:
	static GameManager* m_Instance;
	long m_CountDown;		// 카운트 다운 시간
	int m_Key;				// 입력된 키 (q, w, e, r, t)

public:
	GameManager();				// 생성자
	virtual ~GameManager();		// 소멸자

	static GameManager* GetInstance();		// 싱글톤

	long GetCountDown();	// 카운트다운 시간
	void UpdateCountDown();	// 카운트다운 업데이트
	int GetKey();			// 입력 키
	void InputKey();		// 키 입력
	
	// IState을(를) 통해 상속됨
	void Init() override;
	void Update() override;
	void Draw() override;
	void Destroy() override;
};

#endif