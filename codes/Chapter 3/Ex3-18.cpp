#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	vector<int> ivec;
	ivec.push_back(42);
	cout << ivec[0] << endl;
	/*ivec[0] = 42; 
		直接内存溢出报错了
	*/
	return 0;
}