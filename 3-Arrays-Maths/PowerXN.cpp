/**
 * Time: O(log(n))
 * Space: O(1)
 */

double myPow(double x, int n)
{
    double ans = 1.0;
    long long s = n;

    if (s < 0)
        s = -1 * s;

    while (s)
    {
        if (s % 2 == 1)
        {
            ans = ans * x;
            s = s - 1;
        }
        else
        {
            x = x * x;
            s = s / 2;
        }
    }

    if (n < 0)
        ans = (double)(1.0) / (double)(ans);

    return ans;
}
