/**
 * Time: O(nlog(n)) 
 * Space: O(1)
 */

int findPlatform(int arr[], int dep[], int n)
{
	sort(arr, arr + n);
	sort(dep, dep + n);

	int pn = 1, res = 1;
	int i = 1, j = 0;

	while (i < n && j < n)
	{
		if (arr[i] <= dep[j])
		{
			pn++;
			i++;
		}
		else if (arr[i] > dep[j])
		{
			pn--;
			j++;
		}

		if (pn > res)
		{
			res = pn;
		}
	}

	return res;
}
