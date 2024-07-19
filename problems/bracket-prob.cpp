#include <iostream>
using namespace std;
class Solution
{
public:
    string minRemoveToMakeValid(string s)
    {
        string result = "";
        int openCount = 0;
        for (char c : s)
        {
            if (c == '(')
            {
                openCount++;
                result += c;
            }
            else if (c == ')')
            {
                if (openCount > 0)
                {
                    openCount--;
                    result += c;
                }
            }
            else
            {
                result += c;
            }
        }
        int removeCount = openCount;
        for (int i = result.size() - 1; i >= 0; i--)
        {
            if (removeCount > 0 && result[i] == '(')
            {
                result.erase(i, 1);
                removeCount--;
            }
        }
        return result;
    }
};
int main()
{
    Solution obj;
    string s;
    cout << "Enter the string : ";
    cin >> s;

    obj.minRemoveToMakeValid(s);
    cout << obj.minRemoveToMakeValid(s);

    return 0;
}