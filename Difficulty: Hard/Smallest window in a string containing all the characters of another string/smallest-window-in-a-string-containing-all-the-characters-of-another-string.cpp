//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    string smallestWindow(string s, string p) {
        if (s.length() < p.length()) return "-1";

        vector<int> targetFreq(26, 0), windowFreq(26, 0);
        for (char c : p) targetFreq[c - 'a']++;

        int requiredChars = 0;
        for (int i = 0; i < 26; i++) {
            if (targetFreq[i] > 0) requiredChars++;
        }

        int formedChars = 0, left = 0, right = 0, minLen = INT_MAX, minLeft = 0;
        
        while (right < s.length()) {
            char currentChar = s[right];
            windowFreq[currentChar - 'a']++;

            if (targetFreq[currentChar - 'a'] > 0 && windowFreq[currentChar - 'a'] == targetFreq[currentChar - 'a']) {
                formedChars++;
            }

            while (formedChars == requiredChars) {
                int windowSize = right - left + 1;
                if (windowSize < minLen) {
                    minLen = windowSize;
                    minLeft = left;
                }
                
                char leftChar = s[left];
                windowFreq[leftChar - 'a']--;

                if (targetFreq[leftChar - 'a'] > 0 && windowFreq[leftChar - 'a'] < targetFreq[leftChar - 'a']) {
                    formedChars--;
                }
                
                left++;
            }
            right++;
        }

        return minLen == INT_MAX ? "-1" : s.substr(minLeft, minLen);
    }
};



//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends