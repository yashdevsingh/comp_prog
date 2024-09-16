//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int maxLength(string str) {
        stack<int> stk;
        stk.push(-1);
        int maxLen = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '(') stk.push(i);
            else {
                stk.pop();
                if (stk.empty()) stk.push(i);
                else maxLen = max(maxLen, i - stk.top());
            }
        }
        return maxLen;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.maxLength(S) << "\n";
    }
    return 0;
}
// } Driver Code Ends