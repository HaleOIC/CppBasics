/**
 *@file Ex13-13.cpp
 *@author ShineHale
 *@date 2023-03-02
*/

#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;


class X{
public:
	X() { cout << "X()" << endl;}
	X(const X&) {cout << "X(const X&)" << endl;}
	X& operator=(const X&) {cout << "X& operator=(const X&)" << endl;}
	~X() {cout << "~X()" << endl;}	
};

void foo(const X& rx, X x){
	vector<X> vec;
	vec.reserve(2);
	vec.push_back(rx);
	vec.push_back(x);
}


int main(int argc, char* argv[]){
	
	X *px = new X;
	foo(*px, *px);
	delete px;

    return 0;
}

