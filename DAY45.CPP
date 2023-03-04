//Crawler Log Folder
//https://leetcode.com/problems/crawler-log-folder/

class Solution
{
public:
    int minOperations(vector<string> &logs)
    {
        stack<string> st;
        for (string &s : logs)
        {
            if (s == "../")
            {
                if(!st.empty())
                    st.pop();
            }
            else if (s == "./")
                continue;
            else
                st.push(s);
        }
        return st.size();
    }
};

//Maximum Nesting Depth of Two Valid Parantheses Strings
//https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/


class Solution {
public:
    int maxDepth(string str1) {
        int count = 0;
        int ans = 0;
        for(int i=0; i<str1.length(); i++)
        {
            if(str1[i] == '(')
            {
                count++;
            }
            else if(str1[i] == ')')
            {
                ans = max(ans,count);
                count--;
            }
        }
        return ans;
    }
};