/**
 * first_item:  外部读入控制
 * next: bookNo: "" units_sold: 0 revenue: 0
 * last: bookNo: 9-999-9999-9 units_sold: 0 revenue: 0 
 */


class Sales_data{
public:
	Sales_data( std::string s = "" ) : bookNo( s ) {}
	Sales_data( std::string s, unsigned cnt, double rev): bookNo(s), units_sold(cnt), revenue(rev * cnt){}
	Sales_data( std::istream &is ) { read( is, *this ) }
}
Sales_data first_item(cin);
int main() {
	Sales_data next;
	Sales_data last("9-999-9999-9");
	return 0;
}