/**
 * Time: O(n)
 * Space: O(1)
 */ 

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int maxi = INT_MIN, cnt = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            cnt++;

            if (cnt > maxi)
                maxi = cnt;
        }
        else
        {
            cnt = 0;
        }
    }

    if (maxi < 0)
        return 0;

    return maxi;
}