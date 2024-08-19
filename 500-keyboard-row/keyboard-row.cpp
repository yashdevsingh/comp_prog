class Solution {
private:
    bool helper(string word, string keys){
        for(int i=0; i<word.length(); i++) if (keys.find(word[i]) == string::npos) return false;
        return true;
    }
    char toLow(char c) {
        if (c >= 'A' && c <= 'Z') return c + ('a' - 'A');
        return c;
    }
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> res;
        string s1 = "qwertyuiop";
        string s2 = "asdfghjkl";
        string s3 = "zxcvbnm";
        for (string word : words) {
            string lowercaseWord = word;
            transform(lowercaseWord.begin(), lowercaseWord.end(), lowercaseWord.begin(), ::tolower);
            if (helper(lowercaseWord, s1) || helper(lowercaseWord, s2) || helper(lowercaseWord, s3)) {
                res.push_back(word); 
            }
        }
        return res;
    }
};