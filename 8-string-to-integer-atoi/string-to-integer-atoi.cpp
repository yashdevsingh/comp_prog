class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.length();
        int sign = 1;
        int result = 0;
        //const int INT_MAX = 2147483647;
        //const int INT_MIN = -2147483648;
        while (i < n && s[i] == ' ') i++;
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            if (result > (INT_MAX - digit) / 10) return (sign == 1) ? INT_MAX : INT_MIN;
            result = result * 10 + digit;
            i++;
        }
        return result * sign;
    }
};
