class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        //for(int i=0; i<nums.size(); i++)
        for (int i: nums)
            result ^= i; //XOR
        return result;
    }
};