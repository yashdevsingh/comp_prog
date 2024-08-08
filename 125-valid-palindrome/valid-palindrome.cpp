class Solution {
private:
    void convert(string &s) {
        for (int i = 0; i < s.length(); ++i) {
            if (isupper(s[i]))
                s[i] = tolower(s[i]);
        }
    }
    void remove(string &s) {
        for (int i = 0; i < s.length(); ) {
            if (!isalnum(s[i])) // Checks if alphabet
                s.erase(i, 1);
            else
                ++i;  // Move to next if alphabetic
        }
    }
public:
    bool isPalindrome(string s) {
        convert(s);
        remove(s);
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            if (s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};