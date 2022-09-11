#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        for (auto c:heights) cout << c << endl;
        stack <decltype(heights[0])> S; 
        int ans = 0;
        for ( int c : heights ){
            if ( S.top() < c ) {
                S.push( c ) ;
            }
            // }else{
            //     int cnt = 0;
            //     while ( S.top() > c && !S.empty()){
            //         cnt++;
            //         auto val = S.top();
            //         S.pop();
            //         ans = max( ans, val * cnt);
            //     }
            //     S.push( c );
            // }
        }
        return ans;
    }
};
int main(){
    vector<int> tar;int val;
    while (cin >> val) tar.push_back(val);
    Solution S;
    int ans = S.largestRectangleArea(tar);
    cout << ans;
    return 0;
}