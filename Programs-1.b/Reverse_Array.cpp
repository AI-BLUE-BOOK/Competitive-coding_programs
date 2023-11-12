//------------------------Reverse Array using iteration----------------------//
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

//-------------Reverse Array using space optimsed iterative method-----------//
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

//---------------------------Reverse Array using recursion-------------------//

//Create a function that takes an array, start index, and
//end index of the array as parameters.
//Swap the elements present  at the start and end index, 
//The portion of the array left to be reversed is arr[start+1,end-1].
//Make a recursive call to reverse the rest of the array.
//While calling recursion pass start +1  and ends – 1 as parameters for the shrunk array. 
//Repeat step 2.
//Continue recursion as long as the ‘start < end’ condition is satisfied.
//This is the base case for our recursion.


//Time Complexity: O(n)
//Space Complexity: O(1)

void reverse_array(int arr[],int start,int end)
{
    if(start>=end)
    {
        swap(arr[start],arr[end]);
        reverse_array(arr,start+1,end-1);

    }
}

//--------------Reverse Array using STL Library REVERSE function-------------//
//Time Complexity: O(n)
//Space Complexity: O(1)
//Best method to reverse an array

#include<algorithm>                         //for reverse function

void reverse_array(int arr[],int n)
{
    reverse(arr,arr+n);         //reverse function in STL library
                                //It stores the reversed data in the same array
    print_array(arr,n);         
}