#include<iostream>
using namespace std;
int main(){
	int N, i = 50, sum = 0;
	cin >> N;
	while ( sum += i, i++ < N ) ;
	cout << sum << endl;
	return 0;
}