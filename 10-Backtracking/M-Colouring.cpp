/**
 * Time: O(m*n) 
 * Space: O(n)
 */

bool isSafe(int v, int c, int n, int colours[], bool G[][101])
{
    for (int i = 0; i < n; i++)
    {
        if (G[v][i] == 1 && c == colours[i])
            return false;
    }

    return true;
}

bool color(int v, bool graph[][101], int m, int V, int colours[])
{
    if (v == V)
        return true;

    for (int c = 1; c <= m; c++)
    {
        if (isSafe(v, c, V, colours, graph))
        {
            colours[v] = c;
            if (color(v + 1, graph, m, V, colours))
                return true;
            colours[v] = 0;
        }
    }

    return false;
}

bool graphColoring(bool graph[101][101], int m, int V)
{
    int colours[V];
    for (int i = 0; i < V; i++)
    {
        colours[i] = 0;
    }

    return color(0, graph, m, V, colours);
}
