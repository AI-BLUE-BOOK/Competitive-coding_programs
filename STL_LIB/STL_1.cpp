//*************************MAP in STl****************************************//
//map<key,value> map_name;
#include<bits/stdc++.h>
// OR
#include <iostream>
#include <map>
#include <string>
using namespace std;
 
int main()
{
    map<string, int> mp;        //Key was sting type and value was int type
 
    mp["one"] = 1;              // Inserting data in map
    mp["two"] = 2;              // mp is variable of map type
    mp["three"] = 3;
 
    // Get an iterator pointing to the first element in the map
    map<string, int>::iterator i = mp.begin();
 
    // Iterate through the map and print the elements
    while (i!= mp.end()) {
        cout << "Key: " << i->first
             << ", Value: " << i->second << endl;
        ++i;
    }
 
    return 0;
}
//https://www.geeksforgeeks.org/
//map-associative-containers-the-c-standard-template-library-stl/
