/**
 * Time: O(n)
 * Space: O(1)
 * Majority element floor(n/2)
 */
int majorityElement(vector<int> &v)
{
    int count = 0;
    int ele = 0;

    for (int num : v)
    {
        if (count == 0)
        {
            ele = num;
        }

        if (num == ele)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    return ele;
}