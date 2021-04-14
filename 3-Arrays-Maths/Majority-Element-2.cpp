/**
 * Time: O(n)
 * Space: O(1)
 * Majority element floor(n/3)
 */

vector<int> majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int n1 = -1, n2 = -1, cnt1 = 0, cnt2 = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (nums[i] == n1)
        {
            cnt1++;
        }
        else if (nums[i] == n2)
        {
            cnt2++;
        }
        else if (cnt1 == 0)
        {
            n1 = nums[i];
            cnt1 = 1;
        }
        else if (cnt2 == 0)
        {
            n2 = nums[i];
            cnt2 = 1;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }

    vector<int> ans;
    int c1 = 0, c2 = 0;

    for (int num : nums)
    {
        if (n1 == num)
            c1++;
        else if (n2 == num)
            c2++;
    }

    if (c1 > n / 3)
        ans.push_back(n1);

    if (c2 > n / 3)
        ans.push_back(n2);

    return ans;
}