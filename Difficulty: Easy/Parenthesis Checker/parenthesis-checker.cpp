//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    bool ispar(std::string x) {
        std::stack<char> st;
        for (char c : x) {
            if (c == '(' || c == '{' || c == '[') st.push(c);
            else if (c == ')' || c == '}' || c == ']') {
                if (st.empty()) 
                    return false;
                else {
                    char top = st.top();
                    st.pop();
                    if ((c == ')' && top != '(') ||
                        (c == '}' && top != '{') ||
                        (c == ']' && top != '[')) return false;
                }
            }
        }
        return st.empty();
    }
};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends