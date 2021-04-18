/**
 * Time: O(n!)
 * Space: O(N * N!)
 * Arrays
 */ 
void printPermutation(vector<int> s, int i, int j, vector<vector<int>> &ans)
{
    if (i == j)
    {
        ans.push_back(s);
        return;
    }

    for (int k = i; k <= j; k++)
    {
        swap(s[i], s[k]);
        printPermutation(s, i + 1, j, ans);
        swap(s[i], s[k]);
    }
}

vector<vector<int>> permute(vector<int> &s)
{
    vector<vector<int>> ans;
    printPermutation(s, 0, s.size() - 1, ans);
    return ans;
}

/**
 * String
 */ 
void printPermutation(string s, int i, int j)
{
    if (i == j)
    {
        cout << s << "\n";
        return;
    }

    for (int k = i; k <= j; k++)
    {
        swap(s[i], s[k]);
        printPermutation(s, i + 1, j);
        swap(s[i], s[k]);
    }
}

