//------------------------Count in maths Approach-1--------------------//
// Keep dividing the number by 10 until the number becomes 0.
//REMEMBER: We are not using the modulo operator here.
#include<bits/stdc++.h>

using namespace std;

int count_digits( int n )
{
   int x = n; int count =0;
   while( x !=0 ) 
   {
       x = x / 10;
       count++;
   }
   return count;
}

//------------------------------Count Approach-2---------------------------------//

//  Convert the integer into a string.
//  Find the length of the string.

#include<bits/stdc++.h>

using namespace std;

int count_digits( int n )
{
  string x = to_string(n);
  return x.length(); 
}

int main()
{
   int n = 12345;
   cout<< "Number of digits in "<<n<<" is "<<count_digits(n);
   return 0;
}

//------------------------------Count Approach-3---------------------------------//

// Use logarithm base 10 to count the number of digits. As
// The number of digits in an integer = the upper bound of log10(n)
/*

n = 12345
log10(12345) = 4.091
Integral part of 4.091 is 4 and 4 + 1 =  5 
which is also the number of digits in 12345

*/
#include<bits/stdc++.h>

using namespace std;

int count_digits( int n )
{
  int digits = floor(log10(n) + 1);
  return digits;
}