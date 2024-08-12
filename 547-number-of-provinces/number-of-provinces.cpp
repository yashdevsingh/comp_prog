class Solution {
public:
    void bfs(vector<vector<int>>& isConnected, vector<bool>& visited, int start) {
        visited[start] = true;
        queue<int> q;
        q.push(start);
        while (!q.empty()) {
            int city = q.front();
            q.pop();
            for (int j = 0; j < isConnected.size(); j++) {
                if (isConnected[city][j] == 1 && !visited[j]) {
                    visited[j] = true;
                    q.push(j);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n, false);
        int c = 0;
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                bfs(isConnected, visited, i);
                c++;
            }
        }
        return c;
    }
};