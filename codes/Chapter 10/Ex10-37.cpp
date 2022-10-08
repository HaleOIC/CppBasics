#include<algorithm>
#include<vector>
#include<list>
#include<iterator>
#include<iostream>

using namespace std;

int main(){
	vector<int> vec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	list<int> lst;
	copy( vec.rbegin() + 3 , vec.rbegin() + 7, inserter( lst , lst.begin() ));
	for_each( lst.begin(), lst.end(), [] (const auto& x)  -> void { cout << x << " ";});
	return 0;
}