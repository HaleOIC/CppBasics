#include<iostream>

using namespace std;

int f( const int& x ){
	static int times = 0;
	return times++;
}
int main(){
	int time; cin >> time;
	for ( auto i = 0; i < time; ++i )
		cout << f( 16 ) << endl;
	return 0;
}