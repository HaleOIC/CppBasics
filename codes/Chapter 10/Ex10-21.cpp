#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int val = 10;
	auto f = [ val ] () mutable -> bool {
		while ( val ) --val;
		return val == 0;
	};
	f();
	cout << f() << endl;
	return 0;
}