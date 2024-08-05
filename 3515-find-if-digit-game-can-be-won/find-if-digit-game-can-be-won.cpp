class Solution {
private:
    bool isSingle(int n){
        if(n/10==0) return true;
        else return false;
    }
private:
    bool isDouble(int n){
        int c=0;
        while(n>0){
            n=n/10;
            c++;
        }
        if(c==2) return true;
        else return false;
    }
public:
    bool canAliceWin(vector<int>& nums) {
        int sum_single=0, sum_double=0;
        for(int i=0; i<nums.size(); i++){
            if(isSingle(nums[i])==true) sum_single+=nums[i];
            if(isDouble(nums[i])==true) sum_double+=nums[i];
        }
        if(sum_single!=sum_double)
        return true;
        else return false;
    }
};