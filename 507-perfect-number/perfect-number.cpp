class Solution {
private:
    vector<int> factors(int n){
        vector<int> res;
        for(int i=1; i<=n/2; i++)
            if(n%i==0) res.push_back(i);
        return res;
    }
    int sumArray(vector<int> res){
        int sum=0;
        for(int i=0; i<res.size(); i++)
            sum=sum+res[i];
        return sum;
    }
public:
    bool checkPerfectNumber(int num) {
        return (num==sumArray(factors(num)));
    }
};