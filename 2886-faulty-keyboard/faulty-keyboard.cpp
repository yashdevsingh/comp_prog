class Solution {
public:
    string finalString(string s) {
        string s2;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='i') reverse(s2.begin(), s2.end());
            else s2.push_back(s[i]);
        }
        return s2;
    }
};