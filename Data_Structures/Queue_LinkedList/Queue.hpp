
#pragma once

#include <iostream>
#include <stdexcept>

template<typename T>
class Queue
{

private:

	struct node {
		T data;
		node* next;

		node(T d, node* n = nullptr) {
			data = d;
			next = n;
		}

		~node() { std::cout << data << " is destroyed \n"; }
	};

	node* head = nullptr;
	node* tail = nullptr;
	int size = 0;


public:

	Queue() {
		// default cosntructors
		// no capacity notion
	}

	void push(T value);
	T pop();

	int getSize() { return size;  }
	T front();
	T back();

	void print();
};

template<typename T>
void Queue<T>::push(T value)
{
	node* n = new node(value, nullptr);

	if (head == nullptr)
	{
		head = n;
		tail = n;
	}
	else
	{
		tail->next = n;
		tail = n;
	}

	++size;
}

template<typename T>
T Queue<T>::pop()
{
	if (size == 0)
		throw std::logic_error("\nQueue is empty, nothing to remove\n");

	T res = head->data;

	node* killer = head;

	head = head->next;
	if (head == nullptr)
		tail = nullptr;
	delete killer;

	--size;

	return res;
}

template<typename T>
T Queue<T>::front()
{
	if (size == 0)
		throw std::runtime_error("\nQueue is empty, nothing at front\n");
	return head->data;
}

template<typename T>
T Queue<T>::back()
{
	if (size == 0)
		throw std::runtime_error("\nQueue is empty, nothing at back\n");
	return tail->data;
}

template<typename T>
void Queue<T>::print()
{
	if (size == 0)
		std::cout << "\nEmpty \n";
	node* walker = head;

	while (walker != nullptr)
	{
		std::cout << walker->data << " - > ";
		walker = walker->next;
	}

	std::cout << "\n";
}
