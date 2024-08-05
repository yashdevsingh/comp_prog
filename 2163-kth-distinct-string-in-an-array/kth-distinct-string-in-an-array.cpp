class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string> arr2;
        for(int i = 0;i<arr.size();i++)
        {   int c = 0;
            for(int j = 0;j<arr.size();j++)
            {
                string a = arr[i];
                string b = arr[j];
                if(a==b && i!=j)
                {c=1;}
            }
            if(c==0)
            arr2.push_back(arr[i]);
        }
        if(arr2.size() < k)
        return "";
        else
    return arr2[k-1];
    }
};