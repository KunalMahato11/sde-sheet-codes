/**
 * Time: O(n*n*m)
 * Space: O(n)
 */
vector<string> res;
void wordBreak(string str, string ans, vector<string> words)
{
    if (str.length() == 0)
    {
        ans.pop_back();
        res.push_back(ans);
        return;
    }

    for (int i = 0; i < str.length(); i++)
    {
        string left = str.substr(0, i + 1);
        if (find(words.begin(), words.end(), left) != words.end())
        {
            string right = str.substr(i + 1, str.length());
            wordBreak(right, ans + left + " ", words);
        }
    }
}
vector<string> wordBreak(int n, vector<string> &dict, string s)
{
    wordBreak(s, "", dict);
    return res;
}