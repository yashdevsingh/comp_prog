//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    int lps(string str) {
        int n = str.length();
        vector<int> lpsArray(n, 0);
        int len = 0;
        int i = 1;
        while (i < n) {
            if (str[i] == str[len]) {
                len++;
                lpsArray[i] = len;
                i++;
            } else {
                if (len != 0) len = lpsArray[len - 1];
                else {
                    lpsArray[i] = 0;
                    i++;
                }
            }
        }
        return lpsArray[n - 1];
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.lps(str) << "\n";
    }

    return 0;
}

// } Driver Code Ends