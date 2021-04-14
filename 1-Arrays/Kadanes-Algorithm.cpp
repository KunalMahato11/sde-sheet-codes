/**
 * Time: O(n)
 * Space: O(1)
 */
int kadanesAlgorithm(vector<int> &nums)
{
    int sum = 0;
    int maxi = INT_MIN;
    for (auto i : nums)
    {
        sum += i;
        maxi = max(maxi, sum);
        if (sum < 0)
            sum = 0;
    }

    return maxi;
}

/**
 * Time: O(n)
 * Space: O(1)
 * prints maximum subarrays indices
 */

void kadanesAlgorithm(vector<int> &v)
{
    int sum = 0;
    int maxi = INT_MIN;
    int s = 0, e = 0, start = 0;

    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];

        if (maxi < sum)
        {
            maxi = sum;
            start = s;
            e = i;
        }

        if (sum < 0)
        {
            sum = 0;
            s = i + 1;
        }
    }

    cout << maxi << "\n";
    cout << s << " " << e << "\n";
}
