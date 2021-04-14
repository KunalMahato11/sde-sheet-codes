/**
 * Time : O(2n)
 * Space: O(1)
 */

void colorSort(vector<int> &a)
{
    int c = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 0) c++;
        else if (a[i] == 1) c1++;
        else c2++;
    }
    
    int i = 0;
    while (c--) 
        a[i] = 0, i++;

    int j = i;
    while (c1--) 
        a[j] = 1, j++;
    
    int k = j; 
    while (c2--) 
        a[k] = 2, k++;
}

/**
 * Dutch National Flag Algorithm 
 * Time : O(n)
 * Space: O(1)
 */

void colorSort(vector<int> &a) {
    int l = 0, m = 0, h = a.size() - 1;

    while (m <= h)
    {
        if (a[m] == 0) swap(a[l++], a[m++]);
        else if (a[m] == 1) m++;
        else swap(a[m], a[h--]);
    }
}
