class Solution {
private:
    bool isEquilateral(vector<int>& nums){
        if(nums[0]==nums[1] && nums[0]==nums[2] && nums[1]==nums[2]) return true;
        return false;
    }
    bool isScalene(vector<int>& nums){
        if(nums[0]+nums[1]>nums[2] && nums[1]+nums[2]>nums[0] && nums[2]+nums[0]>nums[1]){
            if(nums[0]!=nums[1] && nums[0]!=nums[2] && nums[1]!=nums[2]) return true;
            return false;
        }
        return false;
    }
    bool isIsosceles(vector<int>& nums){
        if(nums[0]+nums[1]>nums[2] && nums[1]+nums[2]>nums[0] && nums[2]+nums[0]>nums[1]){
            if(nums[0]==nums[1] || nums[0]==nums[2] || nums[1]==nums[2]) return true;
            return false;
        }
        return false;
    }
public:
    string triangleType(vector<int>& nums) {
        if(isEquilateral(nums)) return "equilateral";
        if(isIsosceles(nums)) return "isosceles";
        if(isScalene(nums)) return "scalene";
        return "none";
    }
};