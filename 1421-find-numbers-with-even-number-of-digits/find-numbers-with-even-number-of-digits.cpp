class Solution {
private:
    bool isNoOfDigitsEven(int n){
        int c=0;
        while(n>0){
            n=n/10;
            c++;
        }
        if(c%2==0) return true;
        else return false;
    }
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i=0; i<nums.size(); i++){
            if(isNoOfDigitsEven(nums[i])==true) c++;
        }
        return c;
    }
};