
#include <iostream>
#include "Stack.hpp"

int main()
{
	Stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	s.print();

	std::cout << "\nSize: " << s.getSize() << "\n";
	s.pop();

	std::cout << "\nSize: " << s.getSize() << "\n";
	std::cout << "\nTop: " << s.top() << "\n";
	s.print();

	system("CLS");

	Stack<int> s2 = s;
	s2.print();
	s2.push(6);
	std::cout << "\nStack 2:  ";
	s2.print();
	std::cout << "Size:  " << s2.getSize() << "\n";

	std::cout << "\nStack 1:  ";
	s.print();
	std::cout << "Size:  " << s.getSize() << "\n";

	system("CLS");

	s2 = s;
	std::cout << "\nStack 2:  ";
	s2.print();
	std::cout << "Size:  " << s2.getSize() << "\n";

	std::cout << "\nStack 1:  ";
	s.print();
	std::cout << "Size:  " << s.getSize() << "\n";

	if (s2 == s)
	{
		std::cout << "\nThey are equal \n";
	}
	return 0;
}