/**
 * Time: O((n+m)*log(n+m))
 * Space: O(1) 
 */ 

int nextGap(int gap) 
{ 
    if (gap <= 1) 
        return 0; 
    return (gap / 2) + (gap % 2); 
} 
  
void merge2(vector<int> &arr1, vector<int> &arr2, int n, int m) 
{ 
    int i, j, gap = n + m; 
    for (gap = nextGap(gap); gap > 0; gap = nextGap(gap)) 
    { 
        
        for (i = 0; i + gap < n; i++) 
            if (arr1[i] > arr1[i + gap]) 
                swap(arr1[i], arr1[i + gap]); 
  
        for (j = gap > n ? gap-n : 0 ; i < n&&j < m; i++, j++) 
            if (arr1[i] > arr2[j]) 
                swap(arr1[i], arr2[j]); 
  
        if (j < m) 
        { 
            for (j = 0; j + gap < m; j++) 
                if (arr2[j] > arr2[j + gap]) 
                    swap(arr2[j], arr2[j + gap]); 
        } 
    } 
} 

/**
 * Time: O(n*m)
 * Space: O(1)
 */ 


void merge1(vector<int> &X, vector<int> &Y, int m, int n)
{   
	for (int i = 0; i < m;  i++)
	{
	    if (X[i] > Y[0])
		{
			swap(X[i], Y[0]);
			int first = Y[0];
			int k;
			for (k = 1; k < n && Y[k] < first; k++) {
				Y[k - 1] = Y[k];
			}
			Y[k - 1] = first;
		}
	}
}
