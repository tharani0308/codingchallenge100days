//RANSOM NOTE
//

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map(26);
        for (int i = 0; i < magazine.size(); ++i)
            ++map[magazine[i]];
        for (int j = 0; j < ransomNote.size(); ++j)
            if (--map[ransomNote[j]] < 0)
                return false;
        return true;
    }
};

//MOST COMMON WORD
//https://leetcode.com/problems/most-common-word/description/

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int>m;
        for(int i = 0; i < paragraph.size();){
            string s = "";
            while(i < paragraph.size() && isalpha(paragraph[i])) s.push_back(tolower(paragraph[i++]));
            while(i < paragraph.size() && !isalpha(paragraph[i])) i++;
            m[s]++;
        }
        for(auto x: banned) m[x] = 0;
        string res = "";
        int count = 0;
        for(auto x: m)
            if(x.second > count) res = x.first, count = x.second;
        return res;  
    }
};