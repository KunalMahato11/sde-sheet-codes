/**
 * Time: O(n)
 * Space: O(n)
 */ 

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> s;
    vector<int> res;

    for (int i = 0; i < nums.size(); i++)
    {
        int temp = target - nums[i];

        if (s.find(temp) != s.end())
        {
            res.push_back(s[temp]);
            res.push_back(i);
            return res;
        }
        s[nums[i]] = i;
    }
    return res;
}