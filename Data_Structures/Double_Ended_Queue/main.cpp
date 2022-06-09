
#include<iostream>
#include"Deque.hpp"

int main()
{
	Deque<int> d;

	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	d.push_front(4);
	d.push_front(5);


	d.print();
	std::cout << "Size:  " << d.size() << " \n";
	std::cout << "Front:  " << d.front() << " \n";
	std::cout << "Back:  " << d.back() << " \n";

	d.pop_front();
	d.pop_back();

	d.print();
	std::cout << "Size:  " << d.size() << " \n";
	std::cout << "Front:  " << d.front() << " \n";
	std::cout << "Back:  " << d.back() << " \n";

	return 0;
}