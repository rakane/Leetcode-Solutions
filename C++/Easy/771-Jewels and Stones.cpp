class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {

        int num_jewels = 0;

        for (auto it1 = S.cbegin(); it1 != S.cend(); ++it1)
        {
            for (auto it2 = J.cbegin(); it2 != J.cend(); ++it2)
            {
                if (*it1 == *it2)
                {
                    num_jewels++;
                    continue;
                }
            }
        }

        return num_jewels;
    }
};