/**
 * Time: O(2^n)
 * Space: O(2^n)
 */

void func(int ind, int sum, vector<int> &arr, int N, vector<int> &ans)
{
    if (ind == N)
    {
        ans.push_back(sum);
        return;
    }

    func(ind + 1, sum + arr[ind], arr, N, ans);
    func(ind + 1, sum, arr, N, ans);
}
vector<int> subsetSums(vector<int> arr, int N)
{
    vector<int> ans;
    func(0, 0, arr, N, ans);
    sort(ans.begin(), ans.end());
    return ans;
}
