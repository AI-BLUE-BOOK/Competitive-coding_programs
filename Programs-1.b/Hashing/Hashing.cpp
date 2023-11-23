//----Hashing:Brute Force approach---->
//the time complexity of the function will be O(N)
//If the number of queries is Q, the time complexity will be O(Q*N)
//Inside main function INTEGER array size can be atmost 10^6 i.e arr[1000000]
//Outside main function INTEGER array size can be atmost 10^7 i.e arr[10000000]
//Inside the main function, Boolean integer array size can be atmost 10^7 i.e arr[10000000]
//Outside the main function, Boolean integer array size can be atmost 10^8 i.e arr[100000000]


//But the unordered_map in C++ take O(1) time complexity to perform storing(i.e. insertion) and fetching(i.e. retrieval).


//--------------------optimised approach------------------------>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetching:
        cout << hash[number] << endl;
    }
    return 0;
}

//----------code if the string contains only lowercase letters----------------->

int main()
{
    string s;
    cin>>s;

    int hash[26]={0};
    for(int i=0; i < s.size();i++)
    {
        hash[s[i]-'a']++;
    }

    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
    return 0;

}

//----------code if the string contains uppercase an lowercase letters----------------->
//we have learned the method of number hashing but using this method we cannot hash
//large numbers like 109 or higher.
int main()
{

    string s;
    cin>>s;

    int hash[256]={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]]++;
    }

    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
    return 0;
}
//If we want to fetch the value of a key that does not exist in the map,
//the map will always return 0 in C++ //
//ASCII of A-Z is 65-90 and a-z is 97-122
//Our first priority will be always to use unordered_map and then map.
//If unordered_map gives a time limit exceeded error(TLE), we will then use the map.

//---------------------------------------------------------------------------//
//map stores all elements in sorted order
//unordered_map stores all elements in any order

//We can Simplify perform Number Hashing using map in C++ as follows:
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
//We can simplify perform Character Hashing using map in C++ as follows:
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }

//The total time complexity will be O(N * time taken by map data structure).
//Storing(i.e. insertion) and fetching(i.e. retrieval) in a C++ map,
//both take always O(logN) time complexity, where N = the size of the map.
//But the unordered_map in C++ take O(1) time complexity,
//to perform storing(i.e. insertion) and fetching(i.e. retrieval).
//Most of the time, we will be using unordered_map.
//Our first priority will be always to use unordered_map and then map. If unordered_map gives a time limit exceeded error(TLE), we will then use the map.

//----------------------Hashing is done using several methods----------------//
//  1.Division method
//  2.Folding method
//  3.Mid-Square method


//-------------------------Division Method-----------------------------//
//Pre storing: hash[arr[i]%10] += 1 and Fetching: hash[number%10]
//When array elements give the same remainder when divided by 10,
//then it will be stored in the same index of the hash array.
//We will apply the linear chaining method to resolve the collision.

//But for unordered_map the data type is limited to integer, double, string, etc.
//We cannot have an unordered_map whose key is pair<int, int>.