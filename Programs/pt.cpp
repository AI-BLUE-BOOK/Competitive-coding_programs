#include<iostream>
using namespace std;

int main()
{
    int N=5;
    int count=1;

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<count<<" ";
            count+=1;
        }
        cout<<endl;
    }
}