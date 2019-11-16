class Solution
{
public:
    string defangIPaddr(string address)
    {
        string answer = "";

        for (int i = 0; i < address.length(); i++)
        {
            if (address[i] == '.')
            {
                answer += "[.]";
            }
            else
            {
                answer.push_back(address[i]);
            }
        }

        return answer;
    }
};