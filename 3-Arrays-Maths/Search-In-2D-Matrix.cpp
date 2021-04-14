/**
 * Time: O(n+m)
 * Space: O(1)
 */

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size(), n = m ? matrix[0].size() : 0, r = 0, c = n - 1;
    while (r < m && c >= 0)
    {
        if (matrix[r][c] == target)
        {
            return true;
        }
        matrix[r][c] > target ? c-- : r++;
    }
    return false;
}

/**
 * Time: O(log(n*m))
 * Space: O(1)
 */

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    if (!matrix.size())
        return false;

    int n = matrix.size();
    int m = matrix[0].size();

    int lo = 0;
    int hi = n * m - 1;

    while (lo <= hi)
    {
        int mid = (lo + (hi - lo) / 2);

        if (matrix[mid / m][mid % m] == target)
        {
            return true;
        }

        if (matrix[mid / m][mid % m] < target)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }

    return false;
}