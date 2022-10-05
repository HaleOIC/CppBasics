#include<vector>
int main(){
	std::vector<int> vec{100};
	auto val1 = vec.at(0);
	auto val2 = vec[0];
	auto val3 = vec.front();
	auto val4 = *vec.begin();
	std::vector<int> v;
	val1 = v.at(0);
	val2 = v[0];
	val3 = v.front();
	val4 = *v.begin();
	return 0;
}