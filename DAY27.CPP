//ADD BINARY 
//https://leetcode.com/problems/add-binary/description/

class Solution {
public:
   string addBinary(string a, string b) {
    int i = a.size()-1, j = b.size()-1;
    int remainder = 0;
    string return1 = "";
    while (i >= 0 || j >= 0 || remainder!=0) {
        if (i >= 0) {
            remainder += a[i]=='0'?0:1;
            i--;
        }
        if (j >= 0) {
            remainder += b[j]=='0'?0:1;
            j--;
        }
        return1 = ((remainder%2)==0?"0":"1") + return1;
        remainder /= 2;
    }
    return return1;
}
};