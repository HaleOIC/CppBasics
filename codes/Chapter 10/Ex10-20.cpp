#include<vector>
#include<algorithm>
#include<string>
#include<iostream>

using namespace std;
int main(){
	vector<string> vs{ "helloworld", "checksum", "datagram" };
	int stand_len = 6;
	int count = count_if( vs.begin(), vs.end(), [stand_len]( const string& s ) -> bool {
		if ( (int)s.size() > stand_len ) return true;
		else return false;
	});
	cout << count << endl;
	return 0;
}