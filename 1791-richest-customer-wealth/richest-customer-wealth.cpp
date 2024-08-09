class Solution {
private:
    int sumArr(vector<int> arr){
        int s=0;
        for(int i=0; i<arr.size(); i++) s=s+arr[i];
        return s;
    }
private:
    int maxArr(vector<int> arr){
        int m=0;
        for(int i=0; i<arr.size(); i++) m=max(m, arr[i]);
        return m;
    }
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> arr;
        for(int i=0; i<accounts.size(); i++) arr.push_back(sumArr(accounts[i]));
        return maxArr(arr);
    }
};