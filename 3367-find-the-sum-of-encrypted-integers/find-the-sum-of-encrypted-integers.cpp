class Solution {
private:
    int encrypt(int x){
        int max_d=0, n=0, enc_n=0;
        while (x > 0) {
            max_d = max(max_d, x % 10);
            x /= 10;
            n++;
            }
        for(int i=0; i<n; i++){
            enc_n=enc_n*10+max_d;
        }
        return enc_n;
    }
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            nums[i]=encrypt(nums[i]);
            sum=sum+nums[i];
        }
        return sum;
    }
};