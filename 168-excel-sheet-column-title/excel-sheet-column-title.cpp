class Solution {
public:
    string convertToTitle(int columnNumber) {
        string str = "";
        
        while (columnNumber > 0) { 
            columnNumber--;
            int l = columnNumber % 26;
            str.push_back(char(l + 'A'));
            columnNumber /= 26;
        }
        reverse(str.begin(), str.end());
        return str;
    }
};
