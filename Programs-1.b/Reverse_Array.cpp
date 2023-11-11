//----------Reverse Array using iteration----------//
//Time Complexity: O(n)
//Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void reversearray(int arr[],int start,int end,int n)
{
    while(start<end)
    {
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;

    }
    print_array(arr,n);
}

int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reversearray(arr,0,n-1,n);
    
}

//----------Reverse Array using space optimsed iterative method----------//
//Time Complexity: O(n), single-pass involved.
//Space Complexity: O(1)
void reverseArray(int arr[], int n) {
   int p1 = 0, p2 = n - 1;
   while (p1 < p2) {
      swap(arr[p1], arr[p2]);
      p1++; p2--;
   }
   print_array(arr, n);
}

//----------Reverse Array using recursion----------//