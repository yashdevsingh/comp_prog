class Solution {
public:
    int hIndex(vector<int>& citations) {
        int h=0;
        for(int i=1; i<=citations.size(); i++){
            int c=0;
            for(int j=0; j<citations.size(); j++){
                if(citations[j]>=i) c++;
            }
            if(c>=i) h=max(h, i);
        }
        return h;
    }
};