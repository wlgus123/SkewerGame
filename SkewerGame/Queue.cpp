#include "Queue.h"
#include <iostream>

using namespace std;

// 생성자/소멸자
Queue::Queue()
{
	this->m_size = 0;
	this->m_queue = new int[QUEUE_MAX];
}

Queue::~Queue()
{
	delete[] this->m_queue;
}

// 원소 넣기
void Queue::Push(int p_src)
{
	this->m_queue[this->m_rear] = p_src;
	++this->m_rear;
	++this->m_size;
}

// 원소 빼기
void Queue::Pop(int p_src)
{
	if (this->m_size != 0)		// 큐가 비어있지 않을 때
	{
		this->m_queue[this->m_front] = 0;
		++this->m_front;
		--this->m_size;
	}
	else
	{
		cout << "큐가 비어있습니다." << endl;
	}
}

// 큐의 제일 앞 값
int Queue::GetFront()
{
	return this->m_queue[this->m_front];
}

// 큐의 제일 뒷 값
int Queue::GetBack()
{
	return this->m_queue[this->m_rear - 1];
}

// 큐가 비어있는지 여부
bool Queue::IsEmpty()
{
	return this->m_size == 0;
}

// 큐의 크기
int Queue::Size()
{
	return this->m_size;
}
