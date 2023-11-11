
#include<iostream>
using namespace std;

//-----------Sum of first natural numbers using loop-----------------//
//Time Complexity: O(N)
//Space Complexity: O(1)
int sum_natural(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;

    }
    cout<<sum<<endl;
}


int main()
{
    int n;
    cin>>n;
    sum_natural(n);
}

//-----------Sum of first natural numbers using formula----------//
//Time Complexity: O(1)
//Space Complexity: O(1)

int sum_natural(int n)
{
    int sum = (n*(n+1))/2;
    cout<<sum<<endl;
}

int main()
{
    int n;
    cin>>n;
    sum_natural(n);
}

//---Sum of first natural numbers using recursion by functional way---//

//Time Complexity: O(N)
//Space Complexity: O(N)

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