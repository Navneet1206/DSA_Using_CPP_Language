#include <iostream>
#include <string>
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
    cout << "Enter the string: ";
    getline(cin, s); // Use getline to read the entire line including spaces

    string result = obj.minRemoveToMakeValid(s);
    cout << "Output: " << result << endl;

    return 0;
}
