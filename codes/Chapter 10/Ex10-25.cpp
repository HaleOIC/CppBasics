#include<string>
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>


using namespace std;
using namespace std::placeholders;


void elimdups( vector<string> &vs ){
	sort( vs.begin(), vs.end() );
	auto new_end = unique( vs.begin(), vs.end() );
	vs.erase( new_end, vs.end() );
}

bool check_size(string const& str, size_t sz)
{
    return str.size() <= sz;
}

void biggies( vector<string>& vs, size_t sz ){
	elimdups( vs );
	stable_sort( vs.begin(), vs.end(), 
					[]( const string& lhs, const string& rhs ) -> bool {
						return lhs.size() < rhs.size();
					});

	auto wc = partition( vs.begin(), vs.end(), bind( check_size, _1, sz ));

	for_each( wc, vs.end(), [] ( const string& s ){
		cout << s << " ";
	});
}


int main(){
	vector<string> v{ "1234", "1234", "hi~", "haha", "fun", "checksum" };
	biggies( v, 3 );
	cout << endl;
	return 0;
}