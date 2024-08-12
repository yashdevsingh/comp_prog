class Solution {
private:
    bool isVowel(char c){
        return (c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U');
    }
public:
    string sortVowels(string s) {
        vector<char> vowel;
        for(int i=0; i<s.length(); i++) if(isVowel(s[i])) vowel.push_back(s[i]);
        sort(vowel.begin(), vowel.end());
        int vowelIndex = 0;
        for(int i = 0; i < s.length(); i++) if(isVowel(s[i])) s[i] = vowel[vowelIndex++];
        return s;
    }
};