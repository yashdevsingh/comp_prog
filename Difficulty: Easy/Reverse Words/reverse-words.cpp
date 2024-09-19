//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    string reverseWords(string str) {
        int start = 0;
        int end = str.size() - 1;
        reverse(str.begin(), str.end());
        int i = 0;
        while (i < str.size()) {
            while (i < str.size() && str[i] == '.') i++;
            start = i;
            while (i < str.size() && str[i] != '.') i++;
            end = i - 1;
            reverse(str.begin() + start, str.begin() + end + 1);
        }
        return str;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends