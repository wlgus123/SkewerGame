#include <iostream>
#include "GameManager.h"

using namespace std;

GameManager* GameManager::m_Instance = nullptr;

GameManager::GameManager()
{
	cout << "게임매니저 생성자 호출" << endl;
	Init();
}

GameManager::~GameManager()
{
	cout << "게임매니저 소멸자 호출" << endl;
	Destroy();
}

GameManager* GameManager::GetInstance()
{
	if (GameManager::m_Instance == nullptr)
	{
		GameManager::m_Instance = new GameManager();
	}

	return GameManager::m_Instance;
}

long GameManager::GetCountDown()
{
	return this->m_CountDown;
}

void GameManager::UpdateCountDown()
{
}

int GameManager::GetKey()
{
	return this->m_Key;
}

void GameManager::InputKey()
{

}

// 초기화
void GameManager::Init()
{
	this->m_CountDown = COUNTDOWN_TIME;
}

// 업데이트
void GameManager::Update()
{

}

// 그리기
void GameManager::Draw()
{
}

// 할당 해제
void GameManager::Destroy()
{
	if (GameManager::m_Instance != nullptr)
	{
		delete GameManager::m_Instance;
		GameManager::m_Instance = nullptr;

		cout << "게임매니저 할당 해제" << endl;
	}

}
