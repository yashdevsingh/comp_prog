class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> uglyNumbers;
        uglyNumbers.push_back(1);
        int i2 = 0, i3 = 0, i5 = 0;
        int nextUgly2 = 2, nextUgly3 = 3, nextUgly5 = 5;
        while (uglyNumbers.size() < n) {
            int nextUgly = min({nextUgly2, nextUgly3, nextUgly5});
            uglyNumbers.push_back(nextUgly);
            if (nextUgly == nextUgly2) nextUgly2 = 2 * uglyNumbers[++i2];
            if (nextUgly == nextUgly3) nextUgly3 = 3 * uglyNumbers[++i3];
            if (nextUgly == nextUgly5) nextUgly5 = 5 * uglyNumbers[++i5];
        }
        return uglyNumbers[n - 1];
    }
};