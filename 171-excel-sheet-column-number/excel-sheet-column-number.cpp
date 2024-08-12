class Solution {
public:
    int titleToNumber(string columnTitle) {
        int l=0, num=0;
        for(int i=0; i<columnTitle.length(); i++){
            l=int(columnTitle[i])-64;
            num=num*26+l;
        }
        return num;
    }
};