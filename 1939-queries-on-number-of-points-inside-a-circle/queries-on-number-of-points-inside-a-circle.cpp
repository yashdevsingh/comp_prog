class Solution {
private:
    bool isPointInsideCircle(vector<int>& points, vector<int>& queries){
        double distance = sqrt((points[0] - queries[0]) * (points[0] - queries[0]) + (points[1] - queries[1]) * (points[1] - queries[1]));
        return distance<=queries[2];
    }
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> arr;
        for(int i=0; i<queries.size(); i++){
            int c=0;
            for(int j=0; j<points.size(); j++){
                if(isPointInsideCircle(points[j], queries[i])) c++; 
            }
            arr.push_back(c);
        }
        return arr;
    }
};