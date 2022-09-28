/**
 * 这样的操作应该是const
 * 因为返回了一个不应该更改的量
 */


#include<iostream>

class Person
{
	std::string name;
	std::string address;

	std::string name() const { return name; }
	std::string address() const { return address;}
};

