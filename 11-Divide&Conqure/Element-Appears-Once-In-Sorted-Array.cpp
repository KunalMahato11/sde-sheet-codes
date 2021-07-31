/**
 * Time: O(log(n))
 * Space: O(1)
 */ 
void search(int arr[], int n)
{
    int l = 0, h = n - 1;

    while (l <= h)
    {

        if (l == h)
        {
            cout << arr[l] << "\n";
            break;
        }

        int mid = (l + h) / 2;

        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                l = mid + 2;
            }
            else
            {
                h = mid;
            }
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
    }
}
