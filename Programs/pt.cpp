#include<iostream>
using namespace std;

int main()
{
    int N=5;
    
    for(int i=0;i<N;i++)
    {
        char alphabet='A';
        for(int j=0;j<=i;j++)
        {
            cout<<alphabet;
            alphabet+=1;
        }
        cout<<endl;
    }
}