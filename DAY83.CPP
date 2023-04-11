//Find the Difference
//https://leetcode.com/problems/find-the-difference/description/

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i=0; i<s.size(); i++) {
            if(s[i] != t[i]) {
                    return t[i];
            }
        }
        return t.back();
    }
};

//Word Pattern
//https://leetcode.com/problems/word-pattern/description/

class Solution {
public:
bool wordPattern(string pattern, string s) {
    vector<string> v;
    string word;
    stringstream iss(s);
    while (iss >> word)
        v.push_back(word);
    set<string> S; 
    if (pattern.size() != v.size())
        return false;
    
    unordered_map<char, string> m;
    for (int i = 0; i < pattern.size(); i++) {
        char ch = pattern[i];
        if (m.find(ch) != m.end()) {
            if (m[ch] != v[i])
                return false;
        }
        else {
            if (S.count(v[i]) > 0)
                return false;
            m[ch] = v[i];
            S.insert(v[i]);
        }
    }
    return true;    
}
};