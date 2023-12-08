//-----------------INSERTION SORT--------------------------------------------//
//The array is virtually split into a sorted and an unsorted part. 
//Values from the unsorted part are picked and placed at the correct position in the sorted part.
//Time Complexity: O(n^2) for worst and average case. 

#include<iostream>
using namespace std;

void insertionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    //pritnint the sorted array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}

int main()
{
    int arr[]={5,4,3,9,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    return 0;
}

//Time complexity: O(n) for best case.
//space complexity: O(1)