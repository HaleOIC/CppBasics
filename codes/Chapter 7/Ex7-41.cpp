#include<iostream>
#include<string>

using std::cin; using std::cout; using std::endl;

class Sales_data{
public:

	friend void read( std::istream&, Sales_data& );

	Sales_data( std::string s, unsigned cnt, double rev): 
		bookNo(s), units_sold(cnt), revenue(rev * cnt){ 
			cout << "this is running the delegating constructor!" << endl;
		}


	Sales_data() : Sales_data( "", 0, 0.0 ) {
		cout << "This is the running the function without parameters!" << endl;
	}

	Sales_data( std::string s ) : Sales_data( s, 0, 0.0 ) {
		cout << "this is running only contains parameter string s function!" << endl;
	}
	Sales_data( std::istream &is ) : Sales_data(){
	 	read( is, *this ); 
	 	cout << "this is running the using istream function! " << endl;
	 }
private:
	std::string bookNo;
	unsigned units_sold;
	double revenue;
};

void read ( std::istream& is, Sales_data& self ){
	is >> self.bookNo >> self.units_sold >> self.revenue;
}



int main(){
	Sales_data first( "9-999-9999-9", 10, 25 );
	Sales_data defaul;
	Sales_data Read( cin );
	Sales_data second( "9-999-9999-9" );
	return 0;
}