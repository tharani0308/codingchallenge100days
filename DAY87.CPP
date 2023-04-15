//Regular expression matching 
//https://leetcode.com/problems/regular-expression-matching/

class Solution {
public:
    bool rec(string &s, string &p, int i = 0,int j = 0){
        if(j == p.size()){
            return i == s.size();
        }

        bool match = i < s.size() && (p[j] == '.' || p[j] == s[i]);

        if(j + 1 < p.size() && p[j + 1] == '*'){
            return rec(s, p, i, j + 2) || (match && rec(s, p, i + 1, j));
        }
        else{
            return match && rec(s,p, i + 1, j + 1);
        }
    }

    bool isMatch(string s, string p) {
        return rec(s, p);
    }
};


//Sort the people 
//https://leetcode.com/problems/sort-the-people/

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
      for(int i=0;i<names.size();i++){
            for(int j=0;j<names.size()-i-1;j++){
                if(heights[j]<heights[j+1]){
                    swap(heights[j],heights[j+1]);
                    swap(names[j],names[j+1]);
                }
            }
        }
        for(int i=0;i<heights.size();i++){
            cout<<heights[i]<<" ";
        }
        return names;
    }
};  
   