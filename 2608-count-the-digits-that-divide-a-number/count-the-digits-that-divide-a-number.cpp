class Solution {
public:
    int countDigits(int num) {
        int l=0,c=0,m=num;
        while(m>0){
            l=m%10;
            if(num%l==0) c++;
            m=m/10;
        }
        return c;
    }
};