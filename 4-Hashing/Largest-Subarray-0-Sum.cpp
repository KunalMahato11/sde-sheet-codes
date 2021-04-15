/**
 * Time: O(n)
 * Space: O(n)
 */ 
int maxLen(int a[], int n)
{
    int mx = 0, sum = 0, j = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == 0)
            mx = i + 1;
        else
        {
            if (m.count(sum) == 0)
                m[sum] = i;
            else
                mx = max(mx, i - m[sum]);
        }
    }
    return mx;
}
