/**
 * Time: O(n^3)
 * Space: O(1) 
 */ 

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    vector<vector<int>> res;

    if (nums.empty())
    {
        return res;
    }
    sort(nums.begin(), nums.end());
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int t = target - nums[j] - nums[i];
            int front = j + 1;
            int back = n - 1;

            while (front < back)
            {
                int two_sum = nums[front] + nums[back];

                if (two_sum < t)
                    front++;
                else if (two_sum > t)
                    back--;
                else
                {

                    vector<int> quad(4, 0);
                    quad[0] = nums[i];
                    quad[1] = nums[j];
                    quad[2] = nums[front];
                    quad[3] = nums[back];
                    res.push_back(quad);

                    while (front < back && nums[front] == quad[2])
                        ++front;
                    while (front < back && nums[back] == quad[3])
                        --back;
                }
            }

            while (j + 1 < n && nums[j + 1] == nums[j])
                ++j;
        }

        while (i + 1 < n && nums[i + 1] == nums[i])
            ++i;
    }

    return res;
}