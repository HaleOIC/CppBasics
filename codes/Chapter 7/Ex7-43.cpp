#include<string>
#include<iostream>

class Nodefault{
public:
	Nodefault ( const int& v ): value( v ) {}
private:
	int value;
};


class C{
private:
	Nodefault item;
public:
	C ():item(0) { }
};

int main(){
	C variable;
	return 0;
}