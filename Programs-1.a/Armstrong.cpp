//--------ARMSTRONG NUMBER--------//

// An Armstrong number is a number such that the sum of its digits
// raised to the third power is equal to the number itself.
#include<bits/stdc++.h>
using namespace std;

bool Armstrong(int n)
{
    int sum=0;
    int temp,digit;
    bool isArmstrong;
    
    temp=n;

    while(temp!=0)
    {
        digit=temp%10;
        temp=temp/10;
        sum=sum + (digit*digit*digit);
    }
    if(sum==n)
    {
        isArmstrong=true;
    }
    else
    {
        isArmstrong=false;
    }

    return isArmstrong;

}
int main()
{
    int n;
    bool flag;
    cout<<"Enter the number"<<endl;
    cin>>n;

    flag=Armstrong(n);
    if(flag== true)
    {
        cout<<"Armstrong number"<<endl;
    }
    else
    {
        cout<<"Not an Armstrong number"<<endl;
    }

}