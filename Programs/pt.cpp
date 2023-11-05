#include<iostream>
using namespace std;

int main()
{
   int N=4;
   
   for(int i=0;i<N;i++)
   {  char alphabet = 'A';
     for(int j=N-i-1;j>0;j--)
     {
        cout<<" ";
     }
     int mid=(2*i+1)/2;
     for(int k=0;k<2*i+1;k++)
     {
        cout<<alphabet;
        if(k<mid) alphabet+=1;
        else alphabet--;
     }
     for(int j=N-i-1;j>i;j--)
     {
        cout<<" ";
     }
     cout<<endl;
   }
}