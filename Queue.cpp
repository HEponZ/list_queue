#include "Queue.h"

template <class T>
void Queue<T>::Clear()noexcept
{
	if (IsEmpty() == false)
	{
		queue.clear();
	}
}

template <class T>
void Queue<T>::print() noexcept
{
	if (IsEmpty() == false)
	{
		for (T element : queue)
		{
			cout << element << " ";
		}
		cout << "\n";
	}
}

template <class T>
void Queue<T>::Extract()noexcept
{
	if (IsEmpty() == false)
	{
		queue.pop_back();
	}
}