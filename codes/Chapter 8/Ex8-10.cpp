#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

int main() 
{
	ifstream file("./test.txt");
	vector<string> strvec;
	string buf;
	while ( file >> buf ) strvec.push_back( buf );
	for ( auto each : strvec ){
		istringstream ss(each);
		string word;
		while ( ss >> word ) cout << word << "  ";
	}
	return 0;
}