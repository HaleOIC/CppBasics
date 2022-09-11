#include<iostream>
#include<vector>
using namespace std;
int main(){
	int readVal;
	vector<int> v;
	while (cin >> readVal) {
		v.push_back(readVal);
	}
	return 0;
}