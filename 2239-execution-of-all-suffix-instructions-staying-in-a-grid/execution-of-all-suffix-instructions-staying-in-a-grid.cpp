class Solution
{
    public:
        vector<int> executeInstructions(int n, vector<int> &startPos, string s)
        {
            vector<int> res;
            for (int i = 0; i < s.length(); i++)
            {
                int row = startPos[0];
                int col = startPos[1];
                int c = 0;
                for (int j = i; j < s.length(); j++)
                {
                    if (s[j] == 'L')
                    {
                        if (col > 0)
                        {
                            col--;
                            c++;
                        }
                        else break;
                    }
                    if (s[j] == 'R')
                    {
                        if (col < n - 1)
                        {
                            col++;
                            c++;
                        }
                        else break;
                    }
                    if (s[j] == 'U')
                    {
                        if (row > 0)
                        {
                            row--;
                            c++;
                        }
                        else break;
                    }
                    if (s[j] == 'D')
                    {
                        if (row < n - 1)
                        {
                            row++;
                            c++;
                        }
                        else break;
                    }
                }
                res.push_back(c);
            }
            return res;
        }
};