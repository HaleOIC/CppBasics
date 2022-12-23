#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	fstream file("./test.txt");
	string buf;
	vector<string> strvec;
	while ( file >> buf ) strvec.push_back( buf );
	cout << strvec.size() << endl;
	return 0;
}