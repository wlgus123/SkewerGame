#pragma once
#include <vector>

using namespace std;

// 꼬치 종류 enum
enum E_SkewerType
{
	GREEN_ONION,	// 파 (q)
	GARLIC,			// 마늘 (w)
	ROAST_CHICKEN,	// 닭고기 (e)
	TTEOK,			// 떡 (r)
	PAPRIKA,		// 파프리카 (t)
};

// 큐 클래스 생성
// TODO: 템플릿 사용하기
class Queue
{
	int front;
	int rear;
	vector<int> queue;

public:
	bool isQueueFull();		// 큐가 꽉 찼는지 확인하는 함수
	bool isQueueEmpty();	// 큐가 비었는지 확인하는 함수
	void enQueue(int data);	// 큐에 데이터 삽입
	int deQueue();			// 큐 데이터 추출
	int peek();				// 
};

class skewer
{

};