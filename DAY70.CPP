//Reverse Vowels of a String 
//https://leetcode.com/problems/reverse-vowels-of-a-string/


class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
    string reverseVowels(string s) {
        int l=0, r=s.size()-1;
        while(l<r){
            while (l < r && !isVowel(s[l])) l++;
            while (r > l && !isVowel(s[r])) r--;
            swap(s[l], s[r]);
            l++, r--;
        }
        return s;
    }
};


//Two Sum II-Input Array is sorted
//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/



class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;
        while(i<j)
        {
            if(numbers[i]+numbers[j]>target)
                j--;
            else if(numbers[i]+numbers[j]<target)
                i++;
            if(numbers[i]+numbers[j]==target)
                return {i+1,j+1};
        }
        return {};
    }
};