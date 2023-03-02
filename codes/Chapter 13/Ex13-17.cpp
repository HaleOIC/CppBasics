/**
 *@file Ex13-17.cpp
 *@author ShineHale
 *@date 2023-03-02
*/

#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

class Numbered{
public:
	Numbered() {
		ID = ++val;
	}

	Numbered( const Numbered& rhs ) {
		ID  = ++val;
	}

	int ID;
	static int val;
};

int Numbered::val = 100;

void f(const Numbered &s) { cout << s.ID << endl;}

int main(int argc, char* argv[]){
	
	Numbered a, b = a, c = b;
	f(a);
	f(b);
	f(c);
    return 0;
}

