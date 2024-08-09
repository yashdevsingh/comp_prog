class Solution {
private:
    int op1(int x, string s){
        if(s=="++X" || s=="X++") x++;
        if(s=="--X" || s=="X--") x--;
        return x;
    }
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(int i=0; i<operations.size(); i++){
            x = op1(x, operations[i]);
        }
        return x;
    }
};