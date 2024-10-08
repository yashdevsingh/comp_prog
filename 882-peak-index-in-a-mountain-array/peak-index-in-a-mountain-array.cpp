class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        //int m=0, c=0;
        //for(int i=0; i<arr.size(); i++) m=max(m, arr[i]);
        //for(int i=0; i<arr.size(); i++) if(m==arr[i]) c = i;
        //return c;
        int l=0, r=arr.size()-1, mid = l + (r - l)/2;;
        while(l<r){
            if(arr[mid]<arr[mid+1]) l = mid+1;
            else r = mid;
            mid = l + (r - l)/2;
        }
        return l;
    }
};