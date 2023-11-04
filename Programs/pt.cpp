#include<iostream>
using namespace std;

int main()
{
    int N=5;
   char alphabet='A';
    for(int i=0;i<N;i++)
    {
         
        for(int j=0;j<=i;j++)
        {
            cout<<alphabet;
           
        }
        alphabet+=1;
        cout<<endl;
    }
}