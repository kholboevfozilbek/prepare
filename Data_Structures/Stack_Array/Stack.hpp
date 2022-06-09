
#pragma once

#include<iostream>
#include <stdexcept>
using namespace std;

template<typename T>
class Stack
{

private:

	T* m_arr;
	int m_capacity;
	int m_size = 0;

public:

	Stack(int intil_cap=10)
	{
		// is uer does not provide, 10 by default
		m_capacity = intil_cap; 
		m_arr = new T[m_capacity];
	}
	int getCapacity() { return m_capacity;  }
	int getSize() { return m_size;  }

	bool empty() { return m_size == 0;  }

	void push(T value);
	T pop();
	void clear();

	T top();
	void print();
};

template<typename T>
void Stack<T>::push(T value)
{
	if (m_size == m_capacity)
	{
		T* temp = new T[m_capacity];

		for (int i = 0; i < m_capacity; ++i)
		{
			temp[i] = m_arr[i];
		}

		delete[] m_arr;

		m_arr = new T[m_capacity * 2];

		for (int i = 0; i < m_capacity; ++i)
		{
			m_arr[i] = temp[i];
		}

		m_capacity *= 2;
		delete[] temp;
	}

	m_arr[m_size++] = value;
}

template<typename T>
T Stack<T>::pop()
{
	if (m_size == 0)
		throw runtime_error("\nStack is mepty nothing to remove \n");

	T r = m_arr[--m_size];

	return r;
}

template<typename T>
void Stack<T>::clear()
{
	m_size = 0;
}

template<typename T>
T Stack<T>::top()
{
	if (m_size == 0)
		throw runtime_error("\nStack is empty \n");
	return m_arr[m_size - 1];		
}

template<typename T>
void Stack<T>::print()
{
	std::cout << " \n";
	for (int i = m_size-1; i >=0 ; --i)
	{
		std::cout << m_arr[i] << "\n";
	}
}