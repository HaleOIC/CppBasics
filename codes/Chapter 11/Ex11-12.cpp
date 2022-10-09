#include<utility>
#include<list>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>

auto make_string_int_pair( const std::list< std::string >& slst, const std::list<int>& ilst ){
	std::vector< std::pair< std::string, int >> pvec;
	auto iterslst = slst.begin();
	auto iterilst = ilst.begin();
	while ( iterslst != slst.end() && iterilst != ilst.end() ){
		pvec.push_back( make_pair( *iterslst, *iterilst ));
		++iterilst;
		++iterslst;
	}
	return pvec;
}