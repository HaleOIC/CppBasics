#include<iostream>
#include<string>
class Person
{
private:
	std::string _name;
	std::string _address;
public:
	std::string name() const { return _name; }
	std::string address() const { return _address;}
	void setName(const std::string &value) { _name = value; }
	void setAddress(const std::string &value) { _address = value; }

	Person( const std::string& name, const std::string& address  ) : _name(name), _address(address){}
	Person() = default;
};

std::istream &read(std::istream &is, Person &target){
	std::string s1, s2;
	is >> s1 >> s2;
	target.setName( s1 );
	target.setAddress( s2 );
	return is;
}

std::ostream &print(std::ostream &os, const Person &target){
	os << target.name() << " " << target.address();
	return os;	
}