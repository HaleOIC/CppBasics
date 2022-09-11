#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> ivec(10,13);
	for (auto & iele : ivec)
		iele *= 2;
	for (auto &each : ivec) cout << each << " ";
	return 0;
}