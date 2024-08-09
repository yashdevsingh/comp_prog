class Solution {
private:
    bool isPresent(char c, string s){
        for(int i=0; i<s.length(); i++)
            if(c==s[i]) return true;
        return false;
    }
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> res;
        for(int i=0; i<words.size(); i++)
            if(isPresent(x, words[i])==true) res.push_back(i);
        return res;
    }
};