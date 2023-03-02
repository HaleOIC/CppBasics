/**
 *@file Ex13-18.cpp
 *@author ShineHale
 *@date 2023-03-02
*/

#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

class Employee{
private:
	string name;
	int ID;
	static int cnt;

public:
	Employee() = default;
	Employee(const string& name) :
		name(name), ID (++cnt) {}
	Employee(const Employee& rhs):
		name{rhs.name}, ID(rhs.ID) {}
	~Employee() = default;

	int output(){ return ID;}
};

int Employee::cnt = 10;

int main(int argc, char* argv[]){

	Employee ls("Hale");
	cout << ls.output() << endl;
    return 0;
}

