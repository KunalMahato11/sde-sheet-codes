/**
 * Time: O(n*n)
 * Space: O(n*n)
 */
vector<vector<int>> generatePascalsTriangle(int n)
{
    vector<vector<int>> t(n);

    for (int i = 0; i < n; i++)
    {
        t[i].resize(i + 1);
        t[i][0] = t[i][i] = 1;

        for (int j = 1; j < i; j++)
        {
            t[i][j] = t[i - 1][j - 1] + t[i - 1][j];
        }
    }

    return t;
}

/**
 * Get the nth row of pascal's triangle
 */
vector<int> getRow(int n)
{
    vector<int> v;
    int res = 1;
    v.push_back(res);
    for (int i = 1; i < n; i++)
    {
        res *= (n - i);
        res /= (i);
        v.push_back(res);
    }
    return v;
}
