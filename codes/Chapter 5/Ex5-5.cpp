#include<iostream>
#include<string>
using namespace std;
int main(){
	double grade;
	cin >> grade;
	if (grade >= 90) {
		if ( grade == 100 ) cout << "A++";
		else cout << "A";
	}
	else {
		if ( grade >= 80  ) cout << "B";
		else if ( grade >= 70 ) cout << "C";
		else if ( grade >= 60 ) cout << "D";
		else cout << "F";
	}
	return 0;
}