/**
 * Time:  O(2^n * n)
 * Space: O(2^n * n)
 */ 
void getsubsets(int id, vector<int> &a, vector<vector<int>> &ans, vector<int> &b)
{
    if (id == a.size())
    {
        ans.push_back(b);
        return;
    }
    b.push_back(a[id]);
    getsubsets(id + 1, a, ans, b);
    b.pop_back();
    while (id + 1 < a.size() && a[id] == a[id + 1])
        id++;
    getsubsets(id + 1, a, ans, b);
}
vector<vector<int>> subsetsWithDup(vector<int> &a)
{
    vector<vector<int>> ans;
    vector<int> b;
    sort(a.begin(), a.end());
    getsubsets(0, a, ans, b);
    return ans;
}
