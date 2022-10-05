#include<list>
#include<string>
#include<iostream>

using namespace std;

int main(){
	list<string> lst;
	string str; while ( cin >> str ) lst.push_back( str );
	for ( auto iter = lst.begin(); iter != lst.end(); ++iter ) 
		cout << *iter << endl;
	return 0;
}