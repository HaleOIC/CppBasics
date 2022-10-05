#include<vector>
#include<list>
#include<iostream>
using namespace std;

int main(){
	int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
	vector<int> vec(ia, end( ia ));
	list<int> lst(ia, end( ia ));
	auto it = vec.begin();
	while ( it != vec.end() ) 
		if ( *it & 1 ) 
			it = vec.erase( it );
		else ++it;
	auto iter = lst.begin();
	while ( iter != lst.end() )
		if (! *iter & 1) 
			iter = lst.erase( iter );
		else ++iter;

	for ( auto i = vec.begin(); i != vec.end(); ++i ) cout << *i << " ";
	cout << endl;
	for ( auto i = lst.begin(); i != lst.end(); ++i ) cout << *i << " ";

	return 0;

}