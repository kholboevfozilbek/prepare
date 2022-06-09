
#pragma once

#include<iostream>
#include<stdexcept>

template<typename T>
class Deque
{

private:

	struct node {
		T data;
		node* next;
		node* prev;

		node(T d, node* n = nullptr, node* p = nullptr) {
			data = d;
			next = n;
			prev = p;
		}
	};

	node* m_head = nullptr;
	node* m_tail = nullptr;
	int m_size = 0;

public:

	Deque() = default;
	~Deque() { clear(); }
	Deque(const Deque& o);

	void push_back(T value);
	void push_front(T value);

	T pop_back();
	T pop_front();
	void clear();

	int size() { return m_size; }
	bool empty() { return m_size == 0; }

	T front();
	T back();
	void print();

	Deque& operator= (const Deque& o);
};

template<typename T>
Deque<T>::Deque(const Deque& o)
{
	node* walker = o.m_head;

	while (walker != nullptr)
	{
		this->push_back(walker->data);
		walker = walker->next;
	}
}

template<typename T>
void Deque<T>::push_back(T value)
{
	node* n = new node(value, nullptr, m_tail);
	if (m_head == nullptr)
	{
		m_head = n;
		m_tail = n;
	}
	else
	{
		m_tail->next = n;
		m_tail = n;
	}
	
	++m_size;
}

template<typename T>
void Deque<T>::push_front(T value)
{
	node* n = new node(value, m_head, nullptr);

	if (m_head == nullptr)
	{
		m_head = n;
		m_tail = n;
	}
	else
	{
		m_head->prev = n;
		m_head = n;
	}

	++m_size;
}

template<typename T>
T Deque<T>::pop_back()
{
	if (m_size == 0)
		throw std::logic_error("\nDeque is empty, nothing to remove\n");
	
	T res = m_tail->data;
	node* killer = m_tail;
	m_tail = m_tail->prev;
	if (m_tail == nullptr)
	{
		m_head = nullptr;
	}
	else
	{
		m_tail->next = nullptr;
	}
	delete killer;
	--m_size;
	return res;
}

template<typename T>
T Deque<T>::pop_front()
{
	if (m_size == 0)
		throw std::runtime_error("\nDeque is empty, nothing to remove \n");

	T res = m_head->data;
	node* killer = m_head;

	m_head = m_head->next;
	if (m_head == nullptr)
		m_tail = nullptr;
	else
		m_head->prev = nullptr;
	delete killer;
	--m_size;

	return res;
}

template<typename T>
void Deque<T>::clear()
{
	while (m_head != nullptr)
	{
		node* killer = m_head;
		m_head = m_head->next;

		delete killer;
	}
	m_tail = nullptr;
	m_size = 0;
}

template<typename T>
T Deque<T>::front()
{
	if (m_head == nullptr)
		throw std::runtime_error("\nDeque is empty, nothing in front\n");
	return m_head->data;
}

template<typename T>
T Deque<T>::back()
{
	if (m_head == nullptr)
		throw std::runtime_error("\nDeque is empty, nothing in back\n");
	return m_tail->data;
}


template<typename T>
void Deque<T>::print()
{
	if (m_size == 0)
		std::cout << "\nEmpty\n";

	node* walker = m_head;

	while (walker != nullptr)
	{
		std::cout << walker->data << " - > ";
		walker = walker->next;
	}

	std::cout << "\n";
}

template<typename T>
Deque<T>& Deque<T>::operator= (const Deque& o)
{
	this->clear();
	node* walker = o.m_head;

	while (walker != nullptr)
	{
		this->push_back(walker->data);
		walker = walker->next;
	}
}