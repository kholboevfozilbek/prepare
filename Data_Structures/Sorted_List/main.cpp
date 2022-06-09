
#include <iostream>
#include "Sorted_List.hpp"

int main()
{
	Sorted_List<int> s;

	s.push(1);  
	s.push(7);  
	s.push(3);
	s.push(16);
	s.push(2);

	s.print();
	std::cout << "Size: " << s.size() << "\n";
	std::cout << "\nTop: " << s.top() << "\n";

	return 0;
}