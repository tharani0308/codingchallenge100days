//Remove all duplicates in string 
//leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

class Solution {
public:
    string removeDuplicates(string s) {
        string res;
		res.push_back(s[0]);

		for(int i=1 ; i<s.length() ; i++){

			if(s[i] == res.back()){
				res.pop_back();
			}
			else{
				res.push_back(s[i]);
			}
		}

		return res;
    }
};

//Remove outermost parantheses
//leetcode.com/problems/remove-outermost-parentheses/

class Solution {
public:
    string removeOuterParentheses(string s)
    {
        stack<char>stkchar;
        string result;
        for(char i:s)
        {
            if(i == '(')
            {
                if(stkchar.size() > 0)
                {
                    result += i;
                }
                stkchar.push(i);
            }
            else
            {
                if(stkchar.size() > 1)
                {
                    result += i;
                }
                stkchar.pop();
            }
        }
        return result;
    }
};