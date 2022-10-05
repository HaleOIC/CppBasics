#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector< int > vec;
	for ( int i = 0; i < 30; ++i ) vec.push_back( i );
	cout << "size : " << vec.size() << endl;
	cout << "capacity : " << vec.capacity() << endl;

	for ( int i = 0; i < 30; ++i ) vec.push_back( i );
	cout << "size : " << vec.size() << endl;
	cout << "capacity : " << vec.capacity() << endl;

	for ( int i = 0; i < 50; ++i ) vec.push_back( i );
	cout << "size : " << vec.size() << endl;
	cout << "capacity : " << vec.capacity() << endl;

	vec.shrink_to_fit();
	cout << "capacity : " << vec.capacity() << endl;
	return 0;
}
/*
size : 30
capacity : 32
size : 60
capacity : 64
size : 110
capacity : 128
capacity : 110

说明是指数级别的增长 按照2^n来增长,并且shrink_to_fit()可以退还多余的内存
*/