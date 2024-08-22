class Solution {
private:
    string binaryCom(string s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') s[i] = '1';
            else if (s[i] == '1') s[i] = '0';
        }
        return s;
    }
    string decToBinary(int n) {
        string bN;
        while (n > 0) {
            bN += (n % 2) + '0';
            n = n / 2;
        }
        reverse(bN.begin(), bN.end());
        return bN;
    }
    int binaryToDecimal(string s) {
        long long dec_value = 0;
        long long base = 1;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '1') {
                dec_value += base;
            }
            base = base * 2;
        }
        return dec_value;
    }
public:
    int findComplement(int num) {
       return binaryToDecimal(binaryCom(decToBinary(num)));
    }
};