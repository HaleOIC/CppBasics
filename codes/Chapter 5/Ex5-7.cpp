#include<iostream>
#include<vector>
using namespace std;
int main(){
	int ival1 = 15, ival2 = 15, minval = 0, occurs;
	if (ival1 != ival2) 
		ival1 = ival2;
	else ival1 = ival2 = 0;
	cout << ival1 << ival2 << endl;
	if (ival1 < minval){
		minval = ival1;
		occurs = 1;
	}
	if (int val = get_value())
		cout << "ival = " << ival << endl;
	if ( !ival )
		cout << "ival = 0\n";

	if (ival == 0)
		ival = get_value();
	return 0;
}