#include <iostream>

using namespace std;

int main() 
{
    int i, j;
    while (cout<<"Input two integers:\n", cin >> i >> j){
        try {
            if ( j == 0) 
                throw runtime_error("divisor is zero!");
            cout << i / j << endl;
        }
        catch(runtime_error err){
            cout << err.what() 
                 << "\n Try again? Enter Y or N "<< endl;
                 char ch;
                 cin >> ch;
                 if (! cin || ch != 'Y') 
                    break;
        }
    }
    return 0;
}