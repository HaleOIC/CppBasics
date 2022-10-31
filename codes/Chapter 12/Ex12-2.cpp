#include<vector>
#include<initializer_list>
#include<memory>
#include<string>
#include<iostream>


using namespace std;

class strBlob{
public:
	using sztp = vector<string>::size_type;

	strBlob(): data( make_shared<vector<string>>() ) {}
	strBlob( initializer_list<string> il): data( make_shared<vector<string>>(il)) {}

	sztp size() const { return data->size(); }
	bool empty() const { return data->empty(); }

	// add and remove value
	void push_back( const string& str ) {
		data->push_back( str );
	}
	void pop_back(){
		check( 0, "pop_back on empty StrBlob!");
		data->pop_back();
	}
	// element access
	string& front(){
		check( 0, "front on empty StrBlob!");
		return data->front();
	}
	string& back(){
		check( 0, "back on empty StrBlob!");
		return data->back();
	}

private:
	std::shared_ptr<std::vector<std::string>> data;
	void check( sztp i, const string& msg ) const {
		if ( i >= data->size() ) 
			throw out_of_range( msg );
	}
};

int main(){
	strBlob strB;
	strB.push_back( string("epsfasdas") );
	cout << strB.front() << "  " << strB.back() << endl;
	strB.pop_back();
	// cout << strB.front() << endl;
	return 0;
}