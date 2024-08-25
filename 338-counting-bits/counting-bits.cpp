class Solution {
private:
    int noofOne(string n){
        int c=0;
        for(int i=0; i<n.length(); i++)
            if(n[i] == '1') c++;
        return c;
    }
    string decToBinary(int n) {
        string bN;
        while (n > 0) {
            bN += (n % 2) + '0';
            n = n / 2;
        }
        reverse(bN.begin(), bN.end());
        return bN;
    }
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        vector<int> res;
        for(int i=0; i<=n; i++) ans.push_back(i);
        for(int i=0; i<=n; i++) res.push_back(noofOne(decToBinary(ans[i])));
        return res;
    }
};