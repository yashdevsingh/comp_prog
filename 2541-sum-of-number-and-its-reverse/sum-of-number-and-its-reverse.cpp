class Solution {
private:
    int palindromeSum(int n){
        int m=n;
        int rev=0;
        while(n>0){
            rev=rev*10+(n%10);
            n=n/10;
        }
        return (m+rev);
    }
public:
    bool sumOfNumberAndReverse(int num) {
        if(num==0) return true;
        for(int i=0; i<num; i++){
            if(num==palindromeSum(i))
            return true;
        }
        return false;
    }
};