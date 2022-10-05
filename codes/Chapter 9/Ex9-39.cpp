#include<string>
#include<vector>
#include<iostream>

using namespace std;

int main(){
	vector<string> svec;
	svec.reserve( 1024 );
	string word;
	while ( cin >> word ) 
		svec.push_back( word );
	svec.resize( svec.size() + svec.size() / 2 );
	cout << svec.size() << "  " << svec.capacity() << endl;
	return 0;
}
/*
实现了对于svec的长度增加到了1.5倍
但是没有对于svec预存的数量进行改变还是最开始设置的1024
*/