//------------Palindrome String---------------//

//An integer is considered a palindrome if its digits are symmetric.
//For example, 121 is a palindrome, as well as 121.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


string isPalindrome(string s)
{
    int n = s.length();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            return "NO";
        }
    }
    return "YES";
}
int main()
{
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;
    cout<<isPalindrome(s);
    return 0;
}

