#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    multimap<string, string> families;
    for (string lname, cname; cin >> cname >> lname; families.emplace(lname, cname));
    for (auto const& family : families)
        std::cout << family.second << " " << family.first << endl;
    return 0;
}