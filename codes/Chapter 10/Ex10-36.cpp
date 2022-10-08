#include<list>
#include<algorithm>

int main(){
	std::list<int> lst{ 15, 0, 13, 16, 0, 5, 0 };
	auto pos = find( lst.rbegin(), lst.rend(), 0 );
	return 0;
}