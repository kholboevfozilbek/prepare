
#pragma once

#include <iostream>
#include <stdexcept>

template<typename T>
class Queue
{

private:

	T* arr;
	int capacity;
	int size = 0;
	int begin=0;
	int after_last=0;

public:

	Queue(int initial_cap = 6) {
		if (initial_cap <= 0)
			throw std::runtime_error("\nNegative capacity is not ALLOWED \n");
		capacity = initial_cap;
		arr = new T[capacity];
	}
	~Queue() { delete[] arr; }
	Queue(const Queue& o);
	void push(T value);
	T pop();
	void clear();


	int getSize() { return size;  }
	int getCapacity() { return capacity;  }
	bool empty() { return size == 0;  }

	T front();
	T back();
	int index_front() { return begin;  }
	int index_back() { return after_last;  }

	void print();

	Queue& operator= (const Queue& o);
	bool operator== (const Queue& o);
};

template<typename T>
Queue<T>::Queue(const Queue<T>& o)
{
	this->arr = new T[o.getCapacity()];
	this->size = o.getSize();
	this->begin = o.begin;
	this->after_last = o.after_last;

	for (int i = 0; i < size; ++i)
	{
		this->arr[(begin + i) % capacity] = o.arr[(o.begin + i) % o.capacity];
	}
}

template<typename T>
void Queue<T>::push(T value)
{
	if (size == capacity)
	{
		T* temp = new T[capacity * 2];

		for (int i = 0; i < size; ++i)
		{
			temp[i] = arr[(begin + i) % capacity];
		}

		delete[] arr;
		arr = temp;
		begin = 0;
		after_last = size;
		capacity *= 2;
	}

	arr[after_last] = value;
	after_last = (after_last + 1) % capacity;
	++size;
}

template<typename T>
T Queue<T>::pop()
{
	if (size == 0)
		throw std::runtime_error("\nQueue is empty, nothing to remove!\n");
	T res = arr[begin];

	begin = (begin + 1) % capacity;
	--size;

	return res;
}

template<typename T>
void Queue<T>::clear()
{
	begin = 0;
	after_last = 0;
	size = 0;
}

template<typename T>
T Queue<T>::front()
{
	if (size == 0)
	{
		std::cout << "\nQueue is empty, nothing at front!\n";
	}
	else
	{
		return arr[begin];
	}
}

template<typename T>
T Queue<T>::back()
{
	if (size == 0)
	{
		std::cout << "\nQueue is empty, nothing at back!\n";
	}
	else
	{
		if (after_last > 0)
			return arr[after_last - 1];
		else
			return arr[capacity - 1];
	}
}


template<typename T>
void Queue<T>::print()
{
	if (size == 0)
		std::cout << "\nEmpty \n";

	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[(begin + i) % capacity] << "  ";
	}

	std::cout << "\n";
}

template<typename T>
Queue<T>& Queue<T>::operator= (const Queue<T>& o)
{
	delete[] this->arr;
	this->arr = new T[o.getCapacity()];
	this->size = o.getSize();
	this->begin = o.begin;
	this->after_last = o.after_last;

	for (int i = 0; i < size; ++i)
	{
		this->arr[(begin + i) % capacity] = o.arr[(o.begin + i) % o.capacity];
	}

	return *this;
}

template<typename T>
bool Queue<T>::operator== (const Queue<T>& o)
{
	if (this->size != o.size)
		return false;
	for (int i = 0; i < size; ++i)
	{
		if (this->arr[(begin + i) % capacity] != o.arr[(o.begin + i) % capacity])
			return false;
	}
	return true;
}