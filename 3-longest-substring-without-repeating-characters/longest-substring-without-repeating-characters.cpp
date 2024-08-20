class Solution {



public:
    int lengthOfLongestSubstring(string s) {
      
      int right = 0;
      int left = 0;
      vector<char> check;
     
      int max = 0;
      int len = 0;
        while(right < s.length())
        {
            char c =  s[right];
            auto it = find(check.begin(),check.end(),c);
            if(it == check.end())
            {right++;
            len++;
            check.push_back(c);
            if(len > max)
            max = len;}
            else
            {
                if(len > max)
                max = len;
                left++;
                right = left;
                check.clear();
                len = 0;
            }
        }
        return max;
    }
};