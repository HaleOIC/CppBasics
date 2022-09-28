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
    Sales_data& combine( const Sales_data& rhs ){
        units_sold += rhs.units_sold;
        revenue += rhs.revenue;
        return *this;
    }

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


int main(){

    Sales_data total(cin);
    if ( !total.isbn().empty() ){
        istream &is = cin;
        while ( is ){
            Sales_data trans( is );
            if ( !is ) break;
            if ( total.isbn() == trans.isbn() )
                total.combine( trans );
            else {
                print( cout, total ) << endl;
                total = trans;
            }
        }
        print( cout, total ) << endl;
    }
    else {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}