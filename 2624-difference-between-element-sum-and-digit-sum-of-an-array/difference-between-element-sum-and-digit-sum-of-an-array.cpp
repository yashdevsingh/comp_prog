class Solution {
private:
    int digitSum(int x){
        int sum=0, l=0;
        while(x>0){
            l=x%10;
            sum=sum+l;
            x=x/10;
        }
        return sum;
    }
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1=0, sum2=0;
        for(int i=0; i<nums.size(); i++){
            sum1=sum1+nums[i];
            sum2=sum2+digitSum(nums[i]);
        }
        return abs(sum1-sum2);
    }
};