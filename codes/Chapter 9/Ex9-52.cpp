#include <stack>
#include <string>
#include <iostream>

using namespace std;

int main(){
    string expression{ "This is (C++) ((C+++)lalala)." };
    bool flag = false;
    stack<char> S;
    for (const auto &s : expression)
    {
        if (s == '(') { flag = true; continue; }
        else if (s == ')') flag = false;
        
        if ( flag ) S.push(s);
    }
    
    string repstr;
    while (!S.empty())
    {
        repstr += S.top();
        S.pop();
    }
    
    expression.replace(expression.find("(")+1, repstr.size(), repstr);
    
    cout << expression << endl;
    
    return 0;
}