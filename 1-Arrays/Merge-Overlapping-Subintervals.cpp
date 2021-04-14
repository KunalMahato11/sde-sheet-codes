/**
 * Time: O(nlogn)
 * Space: O(n) 
 */ 

vector<vector<int>> merge(vector<vector<int>> &v)
{
    vector<vector<int>> res; 

    if (v.size() == 0)
        return res;

    sort(v.begin(), v.end());

    auto vtemp = v[0];

    for (int i = 0; i < v.size(); i++)
    {
        if (vtemp[1] >= v[i][0])
        {
            vtemp[1] = max(vtemp[1], v[i][1]);
        }
        else
        {
            res.push_back(vtemp);
            vtemp = v[i];
        }
    }
    res.push_back(vtemp);

    return res;
}

