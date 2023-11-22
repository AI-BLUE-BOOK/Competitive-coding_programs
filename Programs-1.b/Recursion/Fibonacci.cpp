#include <bits/stdc++.h>
using namespace std;

//-----------------------Fibonacci Series method Iterative-----------------------//

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    if (n == 0)
    {
        cout << 0;
    }
    else if (n == 1)
    {
        cout << 0 << " " << 1 << "\n";
    }
    else
    {
        int fib[n + 1];
        fib[0] = 0;
        fib[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        cout << "The Fibonacci Series"<<endl;
        for (int i = 0; i <= n; i++)
        {
            cout << fib[i] << " ";
        }
    }
}

//-----------------------Fibonacci Series method Recursive-----------------------//
//Time Complexity: O(2^N)
//Space Complexity: O(N)
int fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main()
{   int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"The Fibonacci Series"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<fibonacci(i)<<" ";
    }
    return 0;


}