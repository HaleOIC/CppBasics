#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>


using namespace std;

int main()
{

    std::vector<int> v = { 1, 2, 3, 4 };
    std::cout << "ex 10.03: " << std::accumulate(v.cbegin(), v.cend(), 0) << std::endl;


    return 0;
}