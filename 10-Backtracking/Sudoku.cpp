/**
 * Time: O(9^(n*n))
 * Space: O(1)
 */

bool isvalid(int (*grid)[9], int r, int c, int k)
{
    for (int i = 0; i < 9; i++)
    {
        if (grid[r][i] == k)
            return false;
        if (grid[i][c] == k)
            return false;
        if (grid[(3 * (r / 3)) + i / 3][(3 * (c / 3)) + i % 3] == k)
            return false;
    }
    return true;
}

bool solve(int (*grid)[9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (grid[i][j] == 0)
            {
                for (int k = 1; k <= 9; k++)
                {
                    if (isvalid(grid, i, j, k))
                    {
                        grid[i][j] = k;
                        if (solve(grid))
                            return true;
                        else
                            grid[i][j] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

bool SolveSudoku(int grid[9][9])
{
    return solve(grid);
}

void printGrid(int grid[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << grid[i][j] << " ";
        }
    }
}
