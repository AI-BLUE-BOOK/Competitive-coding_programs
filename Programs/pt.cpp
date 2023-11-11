#include<iostream>
using namespace std;


int sum_natural(int n)
{   
    if(n==1)
    {
        return 1;
    }
    return n+sum_natural(n-1);

}
int main()
{
    int n;
    cin>>n;
    cout<<sum_natural(n);
}

