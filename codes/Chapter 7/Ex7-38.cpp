#include<iostream>
#include<string>


class Sales_data{
public:
	Sales_data( std::string s = "" ) : bookNo( s ) {}
	Sales_data( std::string s, unsigned cnt, double rev): bookNo(s), units_sold(cnt), revenue(rev * cnt){}
	Sales_data( std::istream &is = std::cin ) { read( is, *this ); }
private:
	std::string bookNo;
	unsigned units_sold;
	double revenue;
};