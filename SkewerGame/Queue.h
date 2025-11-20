#pragma once
// 큐 클래스 생성
// TODO: 템플릿 사용하기
#ifndef QUEUE_MAX
#define QUEUE_MAX 100	// 큐 저장 최대 크기

class Queue
{
	int* m_queue;	// 큐 배열
	int m_size;		// 큐 크기
	int m_front;	// 제일 앞 값
	int m_rear;		// 제일 뒷 값

public:
	Queue();
	virtual ~Queue();

	void Push(int p_src);
	void Pop(int p_src);
	int GetFront();		// 큐의 제일 앞 값 가져오기 (먼저 빠지는 원소)
	int GetBack();			// 큐의 제일 뒷 값 가져오기
	bool IsEmpty();		// 큐가 비어있는지 여부
	int Size();			// 큐의 크기 가져오기
};

#endif