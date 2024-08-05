class Solution {
private:
    bool isSumOfDigitsEven(int n){
        int sum=0;
        while(n>0){
            sum=sum+n%10;
            n=n/10;
        }
        if(sum%2==0) return true;
        else return false;
    }
public:
    int countEven(int num) {
        int c=0;
        for(int i=1; i<=num; i++){
            if(isSumOfDigitsEven(i)==true) c++;
        }
        return c;
    }
};