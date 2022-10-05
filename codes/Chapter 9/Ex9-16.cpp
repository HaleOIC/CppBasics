#include<vector>
#include<iostream>
#include<list>

using std::vector;using std::cout;using std::list;

bool eq( const list<int> &lis, const vector<int> &vec ){
	vector<int> vlis( lis.begin(), lis.end() );
	if ( vlis == vec ) return true;
	else return false;
}

int main(){
	vector<int> v1{1,2,3,4,5};
	list<int> lis{1,2,3,4,5};
	cout << eq(lis, v1);
	return 0;
}