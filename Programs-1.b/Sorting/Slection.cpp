#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i=0;i<n-1;i++)
    {
        int minIndex = i;
        cout<<minIndex<<endl;
        for (int j=i+1;j<n;j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
                cout<<minIndex<<endl;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int arr[] = {7,5,9,2,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}