//Sort Array By Parity 
//https://leetcode.com/problems/sort-array-by-parity/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
         for(int i=0;i<arr.size()-1;i++){
             int even = i;
             for(int j=i+1 ; j<arr.size();j++){
             if(arr[j]%2==0){
                 even = j;  
             }
         }swap(arr[even],arr[i]);
    }return arr;
    }
};

//Sum of Digits of String After Convert
//https://leetcode.com/problems/sum-of-digits-of-string-after-convert/

class Solution {
public:
    int getLucky(string s, int k) {
        int size=s.length();
        string result="";
        for(int i=0;i<size;i++){
            result+=to_string(int(s[i])-96);
        }
        int temp=0;
        while(k!=0){
            for(int i=0;i<result.length();i++){
                temp+=(int(result[i])-'0');
            }
            result=to_string(temp);
            temp=0;
            k--;
        }
        int answer=stoi(result);
        return answer;
    }
};