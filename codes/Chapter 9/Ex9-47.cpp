#include<vector>
#include<string> 
#include<iostream>

using namespace std;

vector<unsigned> findAllNumbers( const string& s, const string& charSet ){
	vector<unsigned> rv;
	string::size_type pos = 0;
	while ( (pos = s.find_first_of( charSet, pos )) != string::npos ){
		rv.push_back( pos );
		++pos;
	}
	return rv;
}

vector<unsigned> findAllAlpha( const string& s, const string& charSet ){
	vector<unsigned> rv;
	string::size_type pos = 0;
	while ( (pos = s.find_first_not_of( charSet, pos )) != string::npos ){
		rv.push_back( pos );
		++pos;
	}
	return rv;
}


int main(){
	string str("ab2c3d7R4E6");
	string numbers("0123456789");
	vector<unsigned> outNumbers,outAlpha;
	outNumbers = findAllNumbers( str, numbers );
	for ( auto each : outNumbers ) cout << each << " ";
	cout << endl;
	outAlpha = findAllAlpha( str, numbers );
	for ( auto each : outAlpha ) cout << each << " ";
	return 0;
}