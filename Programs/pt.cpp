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
        cout<<"Yes-Palindrome"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}