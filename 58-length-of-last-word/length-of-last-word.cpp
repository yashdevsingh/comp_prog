class Solution {
private:
    string removeTrailingSpaces(string s) {
    size_t endpos = s.find_last_not_of(" \t");
    if (endpos == string::npos) {
        return "";
    }
    return s.substr(0, endpos + 1);
}
public:
    int lengthOfLastWord(string s) {
        s=removeTrailingSpaces(s);
        int c=0;
        int w=0;
        for(int i=0; i<s.length(); i++){
            if(' '==s[i]){
                w++;
                c=0;
            }
            else c++;
        }
        if(w==0)
        return s.length();
        else return c;
        
    }
};