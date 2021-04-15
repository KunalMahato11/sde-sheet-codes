/**
 * Time: O(n)
 * Space: O(n)
 */ 

int longestConsecutive(vector<int> &nums)
{
    unordered_set<int> Set;
    for (int item : nums)
    {
        Set.insert(item);
    }

    int ls = 0;

    for (int item : nums)
    {
        if (!Set.count(item - 1))
        {
            int currentNum = item;
            int currentLs = 1;

            while (Set.count(currentNum + 1))
            {
                currentNum += 1;
                currentLs += 1;
            }

            ls = max(ls, currentLs);
        }
    }

    return ls;
}