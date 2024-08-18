class Solution {
private:
    vector<int> convertEventTime(vector<string>& event) {
        vector<int> time;
        for (int i = 0; i < 2; i++) {
            int hr = stoi(event[i].substr(0, 2));
            int min = stoi(event[i].substr(3, 2));
            int t = hr * 60 + min;
            time.push_back(t);
        }
        return time;
    }
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        vector<int> time1 = convertEventTime(event1);
        vector<int> time2 = convertEventTime(event2);
        return !(time1[1] < time2[0] || time2[1] < time1[0]);
    }
};
