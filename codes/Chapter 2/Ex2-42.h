#ifndef EX2_42_H
#define EX2_42_H
#include<string>
#include<iostream>
struct Sales_data{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

	double calAverage();
	void Print();
	std::string get_isbn();
	unsigned get_sum();
	double get_revenue();
	void set_sum( int );
	void set_revenue( double );
};

void Sales_data::set_sum(int newSum){
	units_sold = newSum;
}
void Sales_data::set_revenue(double newRevenue){
	revenue = newRevenue;
}

double  Sales_data::get_revenue(){
	return revenue;
}

unsigned Sales_data::get_sum(){
	return units_sold;
}

std::string Sales_data::get_isbn(){
	return bookNo;
}


double Sales_data::calAverage(){
	if (units_sold != 0) 
		return revenue /  units_sold;
	else 
		return 0.0;
}


void Sales_data::Print(){
	std::cout << bookNo << " " << units_sold << " " << revenue << std::endl;
	double averPrice = calAverage();
	if ( averPrice != 0.0) 
		std::cout << averPrice << std::endl;
	else 
		std::cout << "(no sales)" << std::endl;
}
#endif