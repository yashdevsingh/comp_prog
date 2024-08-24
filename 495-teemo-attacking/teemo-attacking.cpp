class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if (timeSeries.empty()) return 0;
        int totalPoisonedTime = 0;
        for (int i = 0; i < timeSeries.size() - 1; ++i) {
            int attackTime = timeSeries[i];
            int nextAttackTime = timeSeries[i + 1];
            if (nextAttackTime <= attackTime + duration - 1)    
                totalPoisonedTime += nextAttackTime - attackTime;
            else totalPoisonedTime += duration;
        }
        totalPoisonedTime += duration;
        return totalPoisonedTime;
    }
};