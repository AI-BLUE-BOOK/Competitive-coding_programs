#include <iostream>
using namespace std;

/*

   *
   **
   ***
   ****
   *****


*/

void pattern(int N){
    for (int i=0;i<N;i++)
    {
        for(int j=0;j<=i;j++){
            cout<<"*";
        }

        // As soon as N stars are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line
        cout<<endl;
    }
}

//---------------------------------------------------------------------------------------------//

/*
        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
        1 2 3 4 5 6

*/

void pattern2(int N){
    for (int i=0;i<N;i++)
    {   
        // This is the inner loop which loops for the columns
       // no. of columns = row number for each line here.
       // Here, we print numbers from 1 to the row number
       // instead of stars in each row

        for(int j=0;j<=i;j++){
            cout<<j+1<<" ";
        }
        
        cout<<endl;
    }
}
//---------------------------------------------------------------------------------------------//

/*
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    6 6 6 6 6 6
*/

void pattern3(int N){
    for (int i=0;i<N;i++)
    {   
        // This is the inner loop which loops for the columns
       // no. of columns = row number for each line here.
       // Here, we print numbers from 1 to the row number
       // instead of stars in each row

        for(int j=0;j<=i;j++){
            cout<<i+1<<" ";     // Here, we print the row number instead of column number
                                //because of the pattern 
        }
        
        cout<<endl;
    }
}

//---------------------------------------------------------------------------------------------//

/*
        * * * * * *
        * * * * * 
        * * * * 
        * * * 
        * * 
        *
*/
void pattern5(int N)
{
    
    for (int i = 0; i < N; i++)
    {
        // This is the inner loop which loops for the columns
       // no. of columns = (N - row index) for each line here.
        for (int j =N; j>i; j--)
        {
            cout <<"* ";
        }
       
        // As soon as stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}

//---------------------------------------------------------------------------------------------//

/*
            1 2 3 4 5 6
            1 2 3 4 5
            1 2 3 4
            1 2 3
            1 2 
            1
*/


int main(){
    int N=6;
    for(int i=0;i<N;i++)
    {   // no. of columns = (N - row index) for each line here
        // as we have to print an inverted pyramid.
        // (N-j) will give us the numbers in a row starting from 1 to N-i.
        for(int j=N;j>i;j--)
        {
            cout<<N-j+1<<" ";

        }
        cout<<endl;
    }

}

//--Logic of above code--//
/*   (N=6)to(j>0)    N-j+1

i=0  j=[6]            6-6+1      ->  1
     j=[6,5]          6-5+1      ->  1 2
     j=[6,5,4]        6-4+1      ->  1 2 3
     j=[6,5,4,3]      6-3+1      ->  1 2 3 4
     j=[6,5,4,3,2]    6-2+1      ->  1 2 3 4 5

     j=[6,5,4,3,2,1]  6-1+1      ->  1 2 3 4 5 6

    (N=6)to(j>1)    N-j+1
i=1  j=[6]            6-6+1      ->  1
     j=[6,5]          6-5+1      ->  1 2
     j=[6,5,4]        6-4+1      ->  1 2 3
     j=[6,5,4,3]      6-3+1      ->  1 2 3 4

     j=[6,5,4,3,2]    6-2+1      ->  1 2 3 4 5  and so on.. */

//---------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------//
//------------------------------Multi logic codes----------------------------------------------//

/*  star pyramid pattern

     *     
    ***    
   *****   
  *******  
 ********* 
***********

*/

int main()
{   
        int N=5;
        for(int i=0;i<N;i++)
        {
            for(int j=N-1-i;j>0;j--)        // This loop is for printing spaces
            {
                cout<<" ";
            }
            {
                cout<<" ";
            }
        
        
            for(int k=0;k<(2*i+1);k++)      // This loop is for printing stars
            {
                cout<<"*";
            }
            {
                cout<<"*";
            }


            for(int j=N-1-i;j>0;j--)        // This loop is for printing spaces again in same line
            {
                cout<<" ";
            }
            cout<<endl;
        }
    
}

//----------------Reversed pyramid Pattern----------------------------------------------------------------//

/*

 ********* 
  *******
   *****
    ***
     *
     
*/

int main() 
{   int N=5;
    for(int i=N;i>0;i--)            //here i is decresed this matter to much otherwise loop will be infinite
    {   
        for(int k=0;k<N+1-i;k++)    // This loop is for printing spaces but opposite to above code
        {
            cout<<" ";
        }
        for(int j=(2*i-1);j>0;j--)    //This loop is for printing stars but opposite to above code
        {
            cout<<"*";
        }
        for(int k=0;k<N+1-i;k++)      // This loop is for printing spaces again in same line but opposite to above code
        {
            cout<<" ";
        }
        cout<<endl;
    }


    return 0;
}

//----------------Full Diamond Pattern code------------------------------------------------//
/*
     *
    ***
   ***** 
  *******
 *********
***********  
***********
 *********
  *******
   ***** 
    ***    
     *
*/

int main()
{   int N=6;
    int L=5;
    for(int i=0;i<N;i++)            // This loop is for printing the pyramid
    {   for(int j=N-i-1;j>0;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<2*i-1;k++)
        {
            cout<<"*";
        }
        for(int j=N-i-1;j>0;j--)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
    for(int p=L;p>0;p--)    // This loop is for printing the reverse pyramid
    {
        for(int q=1;q<L+1-p;q++)
        {
            cout<<" ";
        }
        for(int r=1;r<=2*p-1;r++)
        
        {
            cout<<"*";
        }
        for(int q=0;q<L-p-1;q++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}

//-----------------------Half Diamond Star Pattern-------------------------------------//
/*

*    
**   
***  
**** 
*****
**** 
***
**   
* 

*/
#include <iostream>
using namespace std;
int main() 
{   
    int N=5;
    
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<N-1;i++)
    {
        for(int k=N-1;k>i;k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}

//--------------------------------------------------------------------------------------//
/*

1
01
101
0101
10101
010101

*/


int main()
{   int N=6;
    int p;
    for(int i=0;i<N;i++)
    {
        if(i%2==0) p=1;
        else       p=0;
        
        for(int j=0;j<=i;j++)
        {
        cout<<p;
        p=1-p;
        }
        cout<<endl;
    }
    return 0;
}

//------------------------Increasing number Triangle-----------------------------//
//When we have to increase the number we usually take a variable and increase it //
//in the loop and print it.

/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/
#include<iostream>
using namespace std;

int main()
{
    int N=5;
    int count=1;

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<count<<" ";
            count+=1;
        }
        cout<<endl;
    }
}