#include<iostream>
#include<string>

using namespace std;

struct Sales_data{
    Sales_data() = default;
    Sales_data( const string &s) : bookNo(s) {}
    Sales_data( const string &s, unsigned n, double p ) :
        bookNo( s ), units_sold( n ), revenue( n * p ) {}
    Sales_data(istream &is);


    string isbn() const { return bookNo; }
    Sales_data& combine( const Sales_data& );

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;    
};

istream &read( istream &is, Sales_data &item ){
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item){
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

Sales_data::Sales_data( istream &is ){
    read( is, *this );
}
Sales_data& Sales_data::combine( const Sales_data &rhs ){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}


int main(){

    Sales_data item1;
    print(cout, item1) << endl;

    Sales_data item2("0-201-78435-X");
    print(cout, item2) << endl;

    Sales_data item3("0-201-78345-X", 3, 20.00);
    print(cout, item3) << endl;

    Sales_data item4(cin);
    print(cout, item4) << endl;

    return 0;

}