/**
 * Time:  O(N^2^4)
 * Space: O(L * X) 
 * L = length of the path, X = number of paths
 * Prints all the path from (0, 0) to (n-1, m-1)
 */

void helper(int m[MAX][MAX], int i, int j, int n, vector<string> &res, string path)
{
    if (i < 0 || i >= n || j < 0 || j >= n || m[i][j] != 1)
        return;
    if (i == n - 1 && j == n - 1)
    {
        res.push_back(path);
        return;
    }
    m[i][j] = -1;
    helper(m, i + 1, j, n, res, path + 'D');
    helper(m, i - 1, j, n, res, path + 'U');
    helper(m, i, j + 1, n, res, path + 'R');
    helper(m, i, j - 1, n, res, path + 'L');
    m[i][j] = 1;
}
vector<string> printPath(int m[MAX][MAX], int n)
{
    vector<string> res;
    string s = "";
    helper(m, 0, 0, n, res, s);
    sort(res.begin(), res.end());
    return res;
}
