#include<iostream>
#include<forward_list>

using namespace std;

int main(){
	int val;forward_list<int> lst;
	auto prev = lst.before_begin();
	auto iter = lst.begin();	
	while ( cin >> val ) lst.insert_after( prev, val );
	while ( iter != lst.end() ){
		if ( *iter & 1 ) 
			iter = lst.erase_after( prev );
		else prev = iter, ++iter;
	}
	iter = lst.begin();
	while ( iter != lst.end() ) cout << *iter << " ", ++iter;
	return 0;
}