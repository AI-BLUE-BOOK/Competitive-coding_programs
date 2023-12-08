//Bubble Sort Algorithm works by repeatedly swapping the adjacent elements if they are in the wrong order.
//This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.
#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    for(int i=0 ; i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
     cout<<arr[i]<<' '<<endl;
    }
}
//------------Optimized Bubble sort-----------------------------------//
//The array is already sorted then optimised bubble sort will take O(n) time
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int swapped=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = 1;
            }
        }
        if(swapped==0)
        {
            break;
        }
    }
}

//Time complexity = O(N^2)
//space complexity = O(1)