class Solution {
private:
    bool isExponent(const string& s) {
        size_t eIndex = s.find_first_of("eE");
        if (eIndex == string::npos) return false;
        string base = s.substr(0, eIndex);
        string exponent = s.substr(eIndex + 1);
        bool validBase = isDecimal(base) || isInteger(base);
        bool validExponent = isInteger(exponent);
        return validBase && validExponent;
    }
private:
    bool isDecimal(string s) {
        int i = 0;
        if (s[i] == '+' || s[i] == '-') i++;
        bool hasDigitsBeforeDot = false;
        bool hasDigitsAfterDot = false;
        while (i < s.length() && isdigit(s[i])) {
            hasDigitsBeforeDot = true;
            i++;
        }
        if (i < s.length() && s[i] == '.') i++;
        else return false;
        while (i < s.length() && isdigit(s[i])) {
            hasDigitsAfterDot = true;
            i++;
        }
        return (hasDigitsBeforeDot || hasDigitsAfterDot) && i == s.length();
    }
private:
    bool isInteger(string s) {
        int i = 0;
        if (s[i] == '+' || s[i] == '-') i++;
        if (i >= s.length() || !isdigit(s[i])) return false;
        while (i < s.length()) {
            if (!isdigit(s[i])) return false;
            i++;
        }
        return true;
    }
public:
    bool isNumber(string s){
        s.erase(0, s.find_first_not_of(' '));
        s.erase(s.find_last_not_of(' ') + 1);
        if(isExponent(s)==true || isDecimal(s)==true || isInteger(s)==true)
        return true;
        else return false;
    }
};