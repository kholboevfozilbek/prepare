
#pragma once

/// <summary>
/// 
/// DESCENDING ORDER
/// SINGLY LINKED LIST
/// 
/// </summary>
/// <typeparam name="T"></typeparam>

#include<iostream>
#include<stdexcept>

template<typename T>
class Sorted_List
{
private:
	struct node {
		T data;
		node* next;
		node(T new_value, node* next_link) {
			data = new_value;
			next = next_link;
		}
	};

	node* m_head = nullptr;
	node* m_tail = nullptr;
	int m_size = 0;

public:

	Sorted_List() = default;
	~Sorted_List() { clear(); }
	Sorted_List(const Sorted_List& o);

	void push(T new_value);
	void pop();
	void clear();

	bool empty() { return m_size == 0; }
	int size() { return m_size;  }
	T top();
	int count(T target);
	void print();

	Sorted_List& operator= (const Sorted_List& o);
	bool operator== (const Sorted_List& o);
};

template<typename T>
Sorted_List<T>::Sorted_List(const Sorted_List& o)
{
	node* walker = o.m_head;

	while (walker != nullptr)
	{
		this->push(walker->data);
		walker = walker->next;
	}
}

template<typename T>
void Sorted_List<T>::push(T new_value)
{
	node* pred = nullptr;
	node* succ = m_head;

	while (succ != nullptr && succ->data > new_value)
	{
		pred = succ;
		succ = succ->next;
	}

	node* n = new node(new_value, succ);

	if (pred == nullptr)
		m_head = n;
	else
		pred->next = n;
	if (succ == nullptr)
		m_tail = nullptr;

	++m_size;
}

template<typename T>
T Sorted_List<T>::top()
{
	if (m_size == 0)
		throw std::runtime_error("\nList is empty, nothing at the top\n");
	return m_head->data;
}

template<typename T>
void Sorted_List<T>::pop()
{
	if (m_size == 0)
		throw std::runtime_error("\nList is empty, nothing to remove\n");

	node* killer = m_head;
	m_head = m_head->next;
	if (head == nullptr)
		m_tail = nullptr;

	delete killer;

	--m_size;
}

template<typename T>
int Sorted_List<T>::count(T target)
{
	node* walker = m_head;
	int counter = 0;
	while (walker != nullptr)
	{
		if (walker->data == target)
			++counter;
		walker = walker->next;
	}
	return counter;
}

template<typename T>
void Sorted_List<T>::print()
{
	if (m_size == 0)
		std::cout << "\nEmpty\n";

	node* walker = m_head;

	while (walker != nullptr)
	{
		std::cout << walker->data << " -> ";
		walker = walker->next;
	}
	std::cout << "\n";
}

template<typename T>
void Sorted_List<T>::clear()
{
	while (m_head != nullptr)
	{
		node* killer = m_head;
		delete killer;
		m_head = m_head->next;
	}
	m_tail = nullptr;
	m_size = 0;
}

template<typename T>
Sorted_List<T>& Sorted_List<T>::operator= (const Sorted_List& o)
{
	this->clear();

	node* walker = o.m_head;

	while (walker != nullptr)
	{
		this->push(walker->data);
		walker = walker->next;
	}
	return *this;
}

template<typename T>
bool Sorted_List<T>::operator== (const Sorted_List& o)
{
	if (m_size != o.m_size)
		return false;

	node* w1 = m_head, w2 = o.m_head;

	while (w1 != nullptr)
	{
		if (w1->data != w2->data)
			return false;
		w1 = w1->next;
		w2 = w2->next;
	}

	return true;
}
