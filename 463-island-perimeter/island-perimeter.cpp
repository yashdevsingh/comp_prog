class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row[4] = {-1,0,+1,0};
        int col[4] = {0,+1,0,-1};
        int count = 0;
        for(int i = 0 ; i<grid.size();i++)
        {
            for(int j = 0 ; j<grid[0].size();j++)
            {
                if(grid[i][j] == 1)
                {
                    count = count + 4;
                    for(int k = 0;k<4;k++)
                    {
                        int nr = i + row[k];
                        int nc = j + col[k];
                        if(nr>=0 && nr<grid.size() && nc>=0 && nc<grid[0].size() && grid[nr][nc]==1) count--;
                    }
                }
            }
        }
        return count;
    }
};