//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        int A = -1, B = -1;
        for (int i = 0; i < n; i++) {
            int abs_val = abs(arr[i]);
            if (arr[abs_val - 1] < 0) B = abs_val;
            else arr[abs_val - 1] = -arr[abs_val - 1];
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                A = i + 1;
                break;
            }
        }
        return {B, A};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends