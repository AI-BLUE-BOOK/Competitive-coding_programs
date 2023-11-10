//-----------Brute Force-isPrime or not----------------//

#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
        return true;
    }
}
int main()
{
    int n;
    cin>>n;
    bool ans = isPrime(n);
    if(n!=1 && ans==true)
    {
        cout<<"Prime"<<endl;
    }
    else
    {
        cout<<"Not Prime"<<endl;
    }
    
}

//------------Optimal isPrime or not----------------//

bool isPrime(int n)
{
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
        return true;
    }
}
int main()
{
    int n;
    cin>>n;
    bool ans = isPrime(n);
    if(n!=1 && ans==true)
    {
        cout<<"Prime"<<endl;
    }
    else
    {
        cout<<"Not Prime"<<endl;
    }
    
}