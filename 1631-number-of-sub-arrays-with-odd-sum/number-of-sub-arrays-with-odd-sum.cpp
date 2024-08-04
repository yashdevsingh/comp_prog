class Solution
{
    public:
        int numOfSubarrays(vector<int> &arr)
        {
            const int MOD = 1e9 + 7;
            int n = arr.size();
            int countEven = 0, countOdd = 0;
            int prefixSum = 0;
            int result = 0;
            countEven = 1;
            for (int i: arr)
            {
                prefixSum += i;

                if (prefixSum % 2 == 0)
                {
                    result = (result + countOdd) % MOD;
                    countEven++;
                }
                else
                {
                    result = (result + countEven) % MOD;
                    countOdd++;
                }
            }
            return result;
        }
};