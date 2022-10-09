#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<string> exclude = { "aa", "bb", "cc", "dd", "ee", "ff" };
	string word;
	while ( cin >> word ){
		auto is_excluded = binary_search( exclude.cbegin(), exclude.cend(), word );
		auto reply = is_excluded ? "excluded" : "not excluded";
		cout << reply << endl;
	}
	return 0;
}

//set的优点是集合本身的元素就是不重复。