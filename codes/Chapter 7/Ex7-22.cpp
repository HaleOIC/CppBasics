#include<iostream>
#include<string>
class Person
{

	friend std::istream &read( std::istream& , Person& );
	friend std::ostream &print( std::ostream&, const Person& );  

private:
	std::string _name;
	std::string _address;

public:

	std::string name() const { return _name; }
	std::string address() const { return _address;}

	Person( const std::string& name, const std::string& address  ) : _name(name), _address(address){}
	Person(std::istream &is) { read( is, *this );}
	Person() = default;
};

std::istream &read(std::istream &is, Person &target){
	is >> target._name >> target._address;
	return is;
}

std::ostream &print(std::ostream &os, const Person &target){
	os << target._name << " " << target._address;
	return os;	
}
int main(){
	Person P1;
	read( std::cin, P1 );
	print( std::cout, P1 );
	return 0;
}