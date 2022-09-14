#include<iostream>

using namespace std;

void set( int &x ){
	x = 0;
}
int main(){
	int val = 10;
	set( val );
	cout << val;
	return 0;
}