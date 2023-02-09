//Snake Procession 
//https://www.codechef.com/problems/SNAKPROC?tab=statement

#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
		int length;
		string s1, s2;
		cin >> length;
		cin >> s1;
		for (int i = 0; i < length; i++)
		{
			if (s1[i] == '.')
				continue;
			s2 = s2 + s1[i];
		}

		if (s2.length() != 0)
		{

			if (s2[0] == 'H' and s2[s2.length() - 1] == 'T')
			{
				int c = 0;

				for (int k = 0; k < s2.length(); k++)
				{
					if (s2[k] == s2[k + 1])
					{
						cout << "Invalid" << endl;
						c = 1;
						break;
					}
				}

				if (c == 0)
					cout << "Valid" << endl;
			}

			else
				cout << "Invalid" << endl;
		}

		else
			cout << "Valid" << endl;
	}
	return 0;
}


//Valid Paranthesis
//https://leetcode.com/problems/valid-parentheses/description/

class Solution {
public:
    bool isValid(string s) {
        std::vector<char> stack;
        for (int i=0; i<s.length();i++)
        {
            if (s[i] == '{')
                stack.push_back('}');
            else if (s[i] == '(')
                stack.push_back(')');
            else if (s[i] == '[')
                stack.push_back(']');
            else
            {
                if ((stack.empty()) || (s[i] != stack[stack.size()-1]))
                    return false;
                stack.pop_back();
            }
        }
        return stack.empty();
    }
};