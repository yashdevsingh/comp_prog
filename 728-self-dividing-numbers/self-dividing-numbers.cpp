class Solution {
private:
    bool isSelfDividing(int n){
        int l=0;
        int m=n;
        while(n>0){
            l=n%10;
            if(l==0) return false;
            if(l != 0 && m%l != 0) return false;
            n=n/10;
        }
        return true;
    }
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i=left; i<=right; i++)
            if(isSelfDividing(i)) res.push_back(i);
        return res;
    }
};