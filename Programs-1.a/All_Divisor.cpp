//----Brute Force Approach for All Divisor----//

#include<iostream>
using namespace std;

int all_divisor(int n)
{
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        }    
        
        
    }
    
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<all_divisor(n)<<endl;
}

//----------Optimal Approach for All Divisor----------//

#include<cmath>

void all_divisor_optimal(int n)
{
    for(int i=1;i<=sqrt(n);i++)
    {   
        if(n%i==0)
        {
            cout<<i<<endl;
            if(i!=sqrt(n))
            {
                cout<<n/i<<endl;
            }
        }

    }
}