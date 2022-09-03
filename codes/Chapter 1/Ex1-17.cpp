#include<iostream>
int main(){
	int currVal = 0, val = 0;
	if (std::cin>> currVal ){
		int cnt = 1;
		while (std::cin >> val){
			if (val == currVal)
				++cnt;
			else {
				std::cout << currVal << " occurs "
						<< cnt << " times" << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << "occurs " << cnt << " times " << std::endl;
	}
	return 0;
}
/*
If all the value equal , then it will output the one value for the only one time
If all the value do not equal, then it will output the every value for every time
*/
