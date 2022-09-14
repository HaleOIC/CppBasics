#include<iostream>

using namespace std;

void swap (int &val1, int &val2){
	int tmp = val1;
	val1 = val2;
	val2 = tmp;
}

int main(){
	int v1 = 16, v2 = 10;
	swap( v1, v2 );
	cout << v1 << v2 << endl;
	return  0;
}