//-----------Factorial by recursion----------------//
//Time Complexity: O(n)
//Space Complexity: O(n)
#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
}

//-----------Factorial by iteration----------------//
//Time Complexity: O(n)
//Space Complexity: O(1)

int factorial(int n)
{
    int fact=1;
    for(int i=1;i<n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int n;
    cin>>n;
    int result=factorial(n);
    cout<<result;
}