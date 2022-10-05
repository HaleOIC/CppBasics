#include<list>
#include<deque>
#include<iostream>

using namespace std;


int main(){
	list<int> lst{ 1, 9, 5, 3, 4, 7, 8, 2, 1 };
	deque<int> dq1,dq2;
	for ( auto iter = lst.begin(); iter != lst.end(); ++iter )
		if ( *iter & 1 ) dq1.push_back( *iter );
		else dq2.push_back( *iter );
	return 0;
}