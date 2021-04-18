/**
 * Time: O(m*n)
 * Space: O(m)
 */

static bool comparison(Job a, Job b)
{
    return (a.profit > b.profit);
}

vector<int> JobScheduling(Job arr[], int n)
{
    vector<int> res(2);
    sort(arr, arr + n, comparison);
    int maxi = arr[0].dead;
    for (int i = 1; i < n; i++)
    {
        maxi = max(maxi, arr[i].dead);
    }

    int slot[maxi + 1];

    for (int i = 0; i <= maxi; i++)
    {
        slot[i] = -1;
    }

    int countJobs = 0, jobProfit = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = arr[i].dead; j > 0; j--)
        {
            if (slot[j] == -1)
            {
                countJobs++;
                slot[j] = i;
                jobProfit += arr[i].profit;
                break;
            }
        }
    }

    res[0] = countJobs;
    res[1] = jobProfit;

    return res;
}
