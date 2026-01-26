#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //map is used for key value pair
    //always sorted based on key and unique keys
    // if we keep differnt values for same key , it will consider last value only

    map<int, int> mp;
    mp.insert({51, 10});
    mp.insert({3, 6});
    mp.insert({6, 6});
    mp[8] = 12; // another way to insert key value pair
    mp[52] = 15; // update value for key 5

    for(auto[key, value]: mp){
        cout << key << "==>" << value << "\n";
    }    
    
    for(auto it:mp){
        cout << it.first << "==>" << it.second << "\n";     
    }

    auto it = mp.find(3);
    cout << "Found key 3 with value: " << it->second << "\n";

//    auto it = mp.find(500);
//    if(it == mp.end()){
//        cout << "Key not found\n ";
//    } 

    // cout << mp[24]; // if key not found it will insert key with default value 0 
   
    // for(auto[key, value]: mp){
    //     cout << key << "==>" << value << "\n";
    // }   

    ///if i know the value exists then erase it directly
    // mp.erase(3);
    // consfused a value exist or not and find it and erase it

    auto it = mp.find(24);

    if(it != mp.end()){
        mp.erase(it);
    } else {
        cout << "Key 24 not found, cannot erase\n";
    }   
    
    // cout << "Size of map: " << mp.size() << "\n";
    // cout <<"empty " << mp.empty() << "\n"; // 0 means not empty , 1 means empty

    // auto it = mp.begin();
    // it++;
    // cout << it->first << "==>" << it->second << "\n";


       for(auto a: mp){
        cout << a.first << "==>" << a.second << "\n";
       }

       auto it = mp.lower_bound(5); // >= 5 
       cout << "Lower bound of 5: " << it->first << "==>" << it->second << "\n";
       auto  i = mp.upper_bound(9); // >  strictly upper value  8 ans
         cout << "Upper bound of 5: " << i->first << "==>" << i->second << "\n";
       return 0;
}
