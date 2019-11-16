class Solution
{
public:
    string toLowerCase(string str)
    {

        string s;

        for (int i = 0; i < str.length(); i++)
        {
            s.push_back(tolower(str[i]));
        }
        return s;
    }
};