/**
 * Time: O(n*m)
 * Space: O(n*m)
 * DP Solution
 */

int dp[101][101];

int calc(int i, int j, int m, int n)
{
    if (i >= m || j >= n)
        return dp[i][j] = 0;
    if (i == m - 1 && j == n - 1)
        return dp[i][j] = 1;

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    return dp[i][j] = calc(i + 1, j, m, n) + calc(i, j + 1, m, n);
}

int uniquePaths(int m, int n)
{
    int i = 0, j = 0;
    memset(dp, -1, sizeof(dp));
    return calc(i, j, m, n);
}

/**
 * Time: O(min(n-1, m-1))
 * Space: O(1)
 * NCR Solution
 */

int uniquePaths(int m, int n)
{
    int N = n + m - 2;
    int r = m - 1;
    double res = 1;

    for (int i = 1; i <= r; i++)
    {
        res = res * (N - r + i) / i;
    }

    return (int)res;
}