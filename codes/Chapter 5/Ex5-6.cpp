#include<iostream>
#include<string>
using namespace std;
int main(){
	double grade;
	cin >> grade;
	cout <<  ((grade == 100) ? "A++" : 
				((grade >= 90) ? "A" :
					((grade >= 80) ? "B" :
						((grade >= 70) ? "C" :
							((grade >= 60)? "D":
								"F")))));
	return 0;
} 