#include<iostream>
#include"Ex2-42.h"
int main(){
	Sales_data total;
	if (std::cin >> total.bookNo >> total.units_sold >> total.revenue){
		Sales_data trans;
		while (std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue){
			if ( total.get_isbn() == trans.get_isbn() ){
				unsigned newSum = total.get_sum() + trans.get_sum();
				double newRevenue = total.get_revenue() + trans.get_revenue();
				total.set_sum(newSum);
				total.set_revenue(newRevenue);
			}else{
				total.Print();
				total = trans;
			}
		}
		total.Print();
	}else{
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
	return 0;
}