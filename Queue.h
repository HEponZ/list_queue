#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <exception>

using namespace std;

template <class T>
class Queue
{
private:
	list<T> queue;
public:
	Queue() noexcept : Queue{ list<T>()} {};
	Queue(list<T> queue_S) noexcept : queue{ queue_S } {};

	void Clear()noexcept;
	bool IsEmpty() { return queue.empty(); }
	void Add(T element) noexcept { queue.push_back(element); }
	int GetCount() const noexcept { return queue.size(); }
	void Extract()noexcept;
	void print() noexcept;
};