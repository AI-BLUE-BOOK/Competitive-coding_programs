//----------GCD Brute Force Approach 1----------------//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1,num2;
    cin>>num1>>num2;
    int ans;
    for(int i=1;i<=min(num1,num2);i++)
    {
        if(num1 %i ==0 && num2 %i ==0)
        {
            ans=i;
        }
    }
}

//----------GCD Optimal Approach 2----------------//
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    cout<<gcd(num1,num2);

}