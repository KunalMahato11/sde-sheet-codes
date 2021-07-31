/**
 * Time: O(log(min(m,n)))
 * Space: O(1)
 */ 

double findMedianSortedArrays(vector<int> &a, vector<int> &b)
{
    if ((int)a.size() > (int)b.size())
        return findMedianSortedArrays(b, a);

    int n1 = a.size();
    int n2 = b.size();

    int l = 0;
    int r = n1;
    int mid = (n1 + n2) / 2;

    while (l <= r)
    {
        int x = l + (r - l) / 2;
        int y = mid - x;
        int l1 = (x == 0) ? INT_MIN : a[x - 1];
        int r1 = (x == n1) ? INT_MAX : a[x];
        int l2 = (y == 0) ? INT_MIN : b[y - 1];
        int r2 = (y == n2) ? INT_MAX : b[y];
        if (l1 > r2)
        {
            r = x - 1;
        } 
        else if (l2 > r1)
        {
            l = x + 1;
        }
        else
        {
            return ((n1 + n2) & 1) ? (double)min(r1, r2) : (double)(max(l1, l2) + min(r1, r2)) / 2.0;
        }
    }
    return 0.0;
}