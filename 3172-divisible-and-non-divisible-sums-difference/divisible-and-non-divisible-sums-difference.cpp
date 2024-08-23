class Solution {
private:
    int sumarr(vector<int> arr){
        int sum=0;
        for(int i=0; i<arr.size(); i++)
            sum = sum + arr[i];
        return sum;
    }
public:
    int differenceOfSums(int n, int m) {
        vector<int> num1arr;
        vector<int> num2arr;
        for(int i=1; i<=n; i++){
            if(i%m!=0) num1arr.push_back(i);
            if(i%m==0) num2arr.push_back(i);
        }
        return sumarr(num1arr)-sumarr(num2arr);
    }
};