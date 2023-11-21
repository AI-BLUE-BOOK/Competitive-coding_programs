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

//------------------Traversing a map-----------------------------------------//
// Traversing can be done by four ways:
// 1. Using iterators
// 2. Using ranged based for-each loop
// 3. Using for_each() function and lambda function
// 4. using begin() and end() functions

//-------------1.iterators------------------------------------//
    while(i!=map.end())
    {
        cout<<i->first<<" "<<i->second<<endl;
        i++;
    }
    
//-------------2.Ranged based for Loop-------------------------//
   for(auto i: map)
    cout<<i.first<<" "<<i.second<<endl;

//-------------3.begin() and end() functions------------------//
    for(auto i=map.begin();i!=map.end();i++)
       cout<<i->first<<" "<<i->second<<endl;