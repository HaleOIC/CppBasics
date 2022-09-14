#include<iostream>

using namespace std;

int fact(const int& tar){
	int ans = 1; 	
	for ( auto i = 2; i <= tar; i++ )
		ans = ans * i;
	return ans;
}

int main(){
	int P;
	cin >> P;
	cout << fact( P ) << endl;
	return 0;
}