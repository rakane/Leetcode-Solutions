class Solution
{
public:
    int oddCells(int n, int m, vector<vector<int>> &indices)
    {

        // Initialize vector to all zeros
        vector<vector<int>> matrix;
        for (int i = 0; i < n; i++)
        {
            vector<int> v;
            for (int j = 0; j < m; j++)
            {
                v.push_back(0);
            }
            matrix.push_back(v);
        }

        // Loop through indices
        for (int index = 0; index < indices.size(); index++)
        {
            int row = indices[index][0];
            int col = indices[index][1];

            // Loop through row
            for (int i = 0; i < m; i++)
            {
                matrix[row][i]++;
            }

            // Loop through column
            for (int i = 0; i < n; i++)
            {
                matrix[i][col]++;
            }
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] % 2 != 0)
                {
                    count++;
                }
            }
        }

        return count;
    }
};