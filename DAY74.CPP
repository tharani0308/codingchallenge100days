//Nim game
//https://leetcode.com/problems/nim-game/

class Solution {
public:
    bool canWinNim(int n) {
        if(n%4==0){
            return false;
        }
        else{
            return true;
        }
    }
};

//Excel sheet column title 
//https://leetcode.com/problems/excel-sheet-column-title/

class Solution {
public:
    string convertToTitle(int columnNumber) {
    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string str1 = "";
    while (columnNumber > 0) {
        int mod = (columnNumber - 1) % 26;
        columnNumber = (columnNumber - 1) / 26;
        str1 = str[mod] + str1;
    }
    return str1;
}
};






