
#include<iostream>
#include"Stack.hpp"

int main()
{
	Stack<int> s(7);

	s.push(5);
	s.push(6);
	s.push(1);
	s.push(4);
	s.print();
	return 0;
}