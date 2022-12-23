#include <iostream>
#include <fstream>

using namespace std;

istream& print( istream& is ) {
	string buf;
	while ( is >> buf ) cout << buf << endl;
	is.clear();
	return is;
}
