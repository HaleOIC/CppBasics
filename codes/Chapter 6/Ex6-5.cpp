#include<iostream>

using namespace std;

int ABS(const int& val ){
	return (( val > 0 ) ? val : -val ); 
}
int main(){
	cout << ABS( -9 ) << endl;
	return 0;
}