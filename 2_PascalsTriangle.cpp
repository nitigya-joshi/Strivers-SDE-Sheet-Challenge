vector<vector<long long int>> printPascal(int n)
{
    vector<vector<long long int>> v;
    vector<long long int> temp;

    for (int i = 1; i <= n; i++)
    {
        temp.push_back(1);
        if (i > 1)
        {
            for (int j = i, x = 0, y = 1; j > 2; j--, x++, y++)
                temp.push_back(v[i - 2][x] + v[i - 2][y]);
            temp.push_back(1);
        }

        v.push_back(temp);
        temp.clear();
    }
    return v;
}