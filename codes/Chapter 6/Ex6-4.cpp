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
	cout << "Please input the value you want to calculate:\n";
	cin >> P;
	cout << "the answer is:\t" << fact( P ) << endl;
	return 0;
}