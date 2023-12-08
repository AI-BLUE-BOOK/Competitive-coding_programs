//------------Reverse the number-----------------//
#include<iostream>
using namespace std;

int main()
{
    int N;
    int reverse=0;
    cout<<"Enter a number: ";
    cin>>N;
    while(N!=0)
    {
        int remainder=N % 10;
        N=N/10;
        reverse=reverse*10+remainder;
    }
    cout<<"Reverse of the number is: "<<reverse<<endl;
}


//------------Reverse the string METHOD 1----------------//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  string str;
  cout << "Enter a string: ";
  getline(cin, str);
  reverse(str.begin(), str.end());
  cout << "Reversed string: " << str << endl;
  return 0;
}

//------------Reverse the string METHOD 2----------------//

#include <iostream>
#include <string>

using namespace std;

void reverseString(string& str) {
  int n = str.length();                        //total alphabet with spaces in the string
  for (int i = 0; i < n / 2; i++) {
    swap(str[i], str[n - i - 1]);
  }
}

int main() {
  string str;
  getline(cin, str);
  cout << "Original string: " << str << endl;
  reverseString(str);
  cout << "Reversed string: " << str << endl;
  return 0;
}