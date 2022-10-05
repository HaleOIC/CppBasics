#include <iostream>
#include <string>

using namespace std;

string& add_pre_and_suffix(string name, const string& pre, const string& su)
{
    name.insert( 0, pre );
    return name.insert( name.size(), su );
}

int main()
{
    string name("Wang");
    cout << add_pre_and_suffix(name, "Mr.", ", Jr.") << endl;
    return 0;
}