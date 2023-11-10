//------------Method 1 Palindrome String---------------//

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

//----------------method 2 Palindrom string------------------//

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


string isPalindrome(string str)
{
    string string2 = str;

    reverse(string2.begin(),string2.end());

    if(string2 == str)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }

}
int main()
{
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;
    cout<<isPalindrome(s);
    return 0;
}

//----------------method 3 Palindrom Number------------------//

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int reverse=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int temp = n;
    while(temp != 0)
    {
        int remainder = temp%10;
        temp = temp/10;
        reverse = reverse*10 + remainder;
    }

    if(reverse == n)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
