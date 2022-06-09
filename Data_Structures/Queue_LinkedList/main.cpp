

#include <iostream>
#include <string>
#include "Queue.hpp"

int main()
{
	Queue<std::string> q;

	q.push("Sam");
	q.push("Kelly");
	q.push("Bucky");

	q.print();
	std::cout << "\nFront: " << q.front() << " \n";
	std::cout << "\nBack: " << q.back() << " \n";
	std::cout << "Size: " << q.getSize() << "\n";

	q.pop();

	q.print();
	std::cout << "\nFront: " << q.front() << " \n";
	std::cout << "\nBack: " << q.back() << " \n";
	std::cout << "Size: " << q.getSize() << "\n";
	return 0;
}