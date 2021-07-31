/**
 * Time: O(log(n))
 * Space: O(1)
 */ 
int search(vector<int> &nums, int key)
{

    int l = 0, r = nums.size() - 1;

    while (l <= r)
    {
        int mid = (r - l) / 2 + l;
        if (nums[mid] == key)
            return mid;

        if (nums[mid] < nums[r])
        {
            if (nums[mid] < key && key <= nums[r])
                l = mid + 1;
            else
                r = mid - 1;
        }
        else
        {
            if (nums[l] <= key && key < nums[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }
    }

    return -1;
}
