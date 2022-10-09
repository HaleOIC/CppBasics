using Less = bool (*)(Sales_data const&, Sales_data const&);
std::multiset<Sales_data, Less> bookstore(less);