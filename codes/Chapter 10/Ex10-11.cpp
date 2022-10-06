#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void print( const vector<string>& vstr ){
    for (auto const& elem : vstr) 
        cout << elem << " ";
    cout << endl;
}

void eliminate_duplicates( vector<string>& vstr ) {
    
    sort( vstr.begin(), vstr.end() );
    auto new_end = unique( vstr.begin(), vstr.end() );
    vstr.erase(new_end, vstr.end());

}

bool isshorter( const string& s1, const string& s2 ){
    return s1.size() < s2.size();
}

int main(){
    vector<std::string> vs{ "fox", "jumps", "over", "quick", "red", "slow", "red", "turtle", "the", "the" };
    eliminate_duplicates(vs);
    print( vs );
    sort( vs.begin(), vs.end(), isshorter );
    print( vs );
    return 0;
}