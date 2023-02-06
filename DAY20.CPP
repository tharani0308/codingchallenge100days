//Roman to integer
class Solution {
public:
int romanToInt(string str) {
    unordered_map<char,int> mp{
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
    };
    int res =0;
    for(int i=0;i<str.size();i++){
        if(mp[str[i]]<mp[str[i+1]])
            res-=mp[str[i]];
        else
            res+=mp[str[i]];
    }
    return res;
    
}
};


//Zero ones equal one zeros
class Solution {
public:
int romanToInt(string str) {
    unordered_map<char,int> mp{
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
    };
    int res =0;
    for(int i=0;i<str.size();i++){
        if(mp[str[i]]<mp[str[i+1]])
            res-=mp[str[i]];
        else
            res+=mp[str[i]];
    }
    return res;
    
}
};