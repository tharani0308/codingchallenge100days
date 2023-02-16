//Concat Palindrome 
//https://www.codechef.com/problems/CONCATPAL

#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, flag=0,flag2=0,ans1=0,ans2=0,b1=0,b2=0;
        cin>>a>>b;
        string s1, s2;
        cin >> s1;
        cin >> s2;
        unordered_map<char, int> mp;

        for (int i = 0; i < a; i++)
        {
            mp[s1[i]]++;
        }
        for (int i = 0; i < b; i++)
        {
            mp[s2[i]]++;
        }

        int minv = min(a, b);

        int arr1[26] = {0};
        int arr2[26] = {0};
        for (int i = 0; i < a; i++)
        {
            int d = s1[i] - 'a';
            arr1[d]++;
        }

        for (int i = 0; i < b; i++)
        {
            int d = s2[i] - 'a';
            arr2[d]++;
        }

        int check = 0;
        if (a > b)
        {
            for (int i = 0; i < 26; i++)
            {
                if (arr2[i] > arr1[i])
                {
                    check++;
                }
            }
        }

        else
        {
            for (int i = 0; i < 26; i++)
            {
                if (arr2[i] < arr1[i])
                {
                    check++;
                }
            }
        }a
        int k = a + b;

        if (!check)
        {
            if (k % 2 == 0)
            {
                for (auto i : mp)
                {
                    if (i.second % 2 != 0)
                    {

                        flag++;
                    }
                }
                if (flag)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
            else
            {
                for (auto i : mp)
                {
                    if (i.second % 2 != 0)
                    {

                        flag2++;
                    }
                }
                if (flag2 == 1)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}



//Tekken
//https://www.codechef.com/problems/TEKKEN?tab=statement

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>abs(b-c))
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
