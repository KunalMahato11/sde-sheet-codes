/**
 * Time: O(n!)
 * Space: O(n^2)
 */

unordered_map<int, int> diag1, diag2;

void solve(vector<vector<int>> &ans, int i, int n, vector<bool> cols, vector<int> vec)
{
    if (i == n)
    {
        ans.push_back(vec);
        return;
    }

    for (int j = 0; j < n; j++)
    {
        if (cols[j] || diag1[i + j] || diag2[i - j])
            continue;
        cols[j] = true;
        diag1[i + j] = 1;
        diag2[i - j] = 1;

        vec.push_back(j + 1);
        solve(ans, i + 1, n, cols, vec);
        vec.pop_back();

        cols[j] = false;
        diag1[i + j] = 0;
        diag2[i - j] = 0;
    }
}

vector<vector<int>> nQueen(int n)
{
    vector<bool> cols(n, false);
    vector<vector<int>> ans;
    solve(ans, 0, n, cols, {});
    return ans;
}