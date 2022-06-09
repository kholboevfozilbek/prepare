

#include <iostream>
#include "Queue.hpp"

int main()
{
	Queue<int> q;
	q.push(7);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);

	q.print();
	std::cout << "Size:  " << q.getSize() << "\n";
	std::cout << "Capacity: " << q.getCapacity() << "\n";
	std::cout << "First:  " << q.front() << " \n";
	std::cout << "Last:  " << q.back() << " \n";

	q.pop();
	q.pop();

	q.print();
	std::cout << "Size:  " << q.getSize() << "\n";
	std::cout << "Capacity: " << q.getCapacity() << "\n";
	std::cout << "First:  " << q.front() << " \n";
	std::cout << "Last:  " << q.back() << " \n";

	q.push(11);
	q.push(9);
	q.push(2003);

	q.print();
	std::cout << "Size:  " << q.getSize() << "\n";
	std::cout << "Capacity: " << q.getCapacity() << "\n";
	std::cout << "First:  " << q.front() << " \n";
	std::cout << "Last:  " << q.back() << " \n";
	return 0;
}