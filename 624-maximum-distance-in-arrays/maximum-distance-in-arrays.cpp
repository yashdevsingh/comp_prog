class Solution {
private:
    vector<int> minmax(const vector<int>& array) {
        return {array.front(), array.back()};
    }
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int m = arrays.size();
        int overallMin = arrays[0].front();
        int overallMax = arrays[0].back();
        int maxDist = 0;
        for (int i = 1; i < m; ++i) {
            int currentMin = arrays[i].front();
            int currentMax = arrays[i].back();
            maxDist = max(maxDist, abs(currentMax - overallMin));
            maxDist = max(maxDist, abs(overallMax - currentMin));
            overallMin = min(overallMin, currentMin);
            overallMax = max(overallMax, currentMax);
        }
        return maxDist;
    }
};