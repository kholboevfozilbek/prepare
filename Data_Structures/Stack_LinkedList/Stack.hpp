
#pragma once

#include <iostream>
#include <stdexcept>


template<typename T>
class Stack
{

private:

	struct node
	{
		T data;
		node* next;

		node(T d, node* n = nullptr) {
			data = d;
			next = n;
		}
	};

	node* head = nullptr;
	int size = 0;

public:

	Stack() {
		//empty Stack by default, size == 0
		//we do not need capacity with linked list implemenetation
	}
	~Stack() { clear(); }

	Stack(const Stack& o);
	// modifiers
	void push(T value);
	T pop();
	void clear();

	//access
	T top();
	int getSize() const { return size;  }
	bool empty() const { return size == 0; }
	void print() const;

	// operators

	Stack operator= (const Stack& o);
	bool operator== (const Stack& o);
};

template<typename T>
void Stack<T>::push(T value)
{
	node* n = new node(value, head);
	head = n;
	++size;
}

template<typename T>
Stack<T>::Stack(const Stack<T>& o)
{
	T* arr = new T[o.getSize()];

	node* walker = o.head;
	int i=0;
	while (walker != nullptr)
	{
		arr[i] = walker->data;

		++i;
		walker = walker->next;
	}

	for (int i = o.getSize() - 1; i >= 0; --i)
	{
		this->push(arr[i]);
	}

	delete[] arr;
}

template<typename T>
T Stack<T>::pop()
{
	if (size == 0)
		throw std::runtime_error("\nStack is empty \n");
	T res = head->data;

	node* killer = head;
	head = head->next;

	delete killer;
	--size;

	return res;
}

template<typename T>
void Stack<T>::clear()
{
	while (head != nullptr)
	{
		node* killer = head;
		head = head->next;
		delete killer;

	}
	size = 0;
}

template<typename T>
T Stack<T>::top()
{
	if (size == 0)
		throw std::runtime_error("\nStack is empty \n");
	return head->data;
}

template<typename T>
void Stack<T>::print() const
{
	if (size == 0)
		std::cout << "\nEmpty \n";
	node* walker = head;

	while (walker != nullptr)
	{
		std::cout << walker->data << "  ";
		walker = walker->next;
	}
	std::cout << "\n";
}

template<typename T>
Stack<T> Stack<T>::operator= (const Stack<T>& o)
{
	this->clear();
	T* arr = new T[o.getSize()];

	node* walker = o.head;
	int i = 0;
	while (walker != nullptr)
	{
		arr[i] = walker->data;

		++i;
		walker = walker->next;
	}

	for (int i = o.getSize() - 1; i >= 0; --i)
	{
		this->push(arr[i]);
	}

	delete[] arr;
	return *this;
}

template<typename T>
bool Stack<T>::operator== (const Stack<T>& o)
{
	node* w1 = this->head;
	node* w2 = o.head;

	while (w1 != nullptr)
	{
		if (w1->data != w2->data)
			return false;

		w1 = w1->next;
		w2 = w2->next;
	}
	return true;
}