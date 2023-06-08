void setZeros(vector<vector<int>> &matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    set<int> rows, cols;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                rows.insert(i);
                cols.insert(j);
            }
        }
    }

    for (auto i : rows)
    {
        for (int j = 0; j < n; j++)
            matrix[i][j] = 0;
    }
    for (auto j : cols)
    {
        for (int i = 0; i < m; i++)
            matrix[i][j] = 0;
    }
}