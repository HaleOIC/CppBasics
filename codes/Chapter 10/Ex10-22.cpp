#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>

using namespace std;
using namespace std::placeholders;

bool isShorter( const string& s, string::size_type len ){
	return s.size() <= len;
}


int main(){
	vector<string> svec{ "kezixian", "caihaowen", "yys" };
	int ans = count_if( svec.begin(), svec.end(), bind( isShorter, _1, 6 ) );
	cout << ans << endl;
	return 0;
}