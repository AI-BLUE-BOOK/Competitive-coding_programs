//------------Method 1 Palindrome String---------------//

//An integer is considered a palindrome if its digits are symmetric.
//For example, 121 is a palindrome, as well as 121.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


string isPalindrome(string s)
{
    int n = s.length();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            return "NO";
        }
    }
    return "YES";
}
int main()
{
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;
    cout<<isPalindrome(s);
    return 0;
}

//----------------method 2 Palindrome string------------------//

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


string isPalindrome(string str)
{
    string string2 = str;

    reverse(string2.begin(),string2.end());

    if(string2 == str)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }

}
int main()
{
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;
    cout<<isPalindrome(s);
    return 0;
}

//------------------------method 3 Palindrome string-------------------------//
bool IsPalindrome(string s) {

        int left = 0, right = s.length()-1;
        while(left<right)
        {
            if(!isalnum(s[left])) 
                left++;
            else if(!isalnum(s[right])) 
                right--;
            else if(tolower(s[left])!=tolower(s[right])) 
                return false;
            else {
                left++; 
                right--;
            }
        }
        return true;

}
int main()
{

  string str;
  cin>>str;
  bool ans = IsPalindrome(str);

  if (ans == true) {
    cout << "Palindrome";
  } else {
    cout << "Not Palindrome";
  }
  return 0;
}
//---------------method 4 Palindrome string RECURSIVE approach---------------//

bool palindrome(int i, string& s){
    
    // Base Condition
    // If i exceeds half of the string means all the elements 
    // are compared, we return true.
    if(i>=s.length()/2) return true;
    
    // If the start is not equal to the end, not the palindrome.
    if(s[i]!=s[s.length()-i-1]) return false;
    
    // If both characters are the same, increment i and check start+1 and end-1.
    return palindrome(i+1,s);
}

int main() {
	
	// Example string.
	string s = "madam";
	cout<<palindrome(0,s);
	cout<<endl;
	return 0;
}

//----------------method 1 Palindrome Number------------------//


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int reverse=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int temp = n;
    while(temp != 0)
    {
        int remainder = temp%10;
        temp = temp/10;
        reverse = reverse*10 + remainder;
    }

    if(reverse == n)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
