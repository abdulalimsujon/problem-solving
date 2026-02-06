Pair and Tuple
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    pair<int, string> p = {1, "sujon"};
    // auto [roll,name] = p;

    // cout << p.first << " << " << p.second << "\n";
    int n;
    cin >> n;
    //// pair<string, int> students[n];

    // for (int i = 0;i < n; i++) {
    //     cin >> students[i].first >> students[i].second;
    // }
    // for(auto [x,y]: students){
    //      cout << x << " " << y;
    //  }  
    //  for(auto n: students){
    //      cout << n.first << " " << n.second;
    //  }

    // tuple<string,int ,int> t = {"alim", 23, 101};

    // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << "\n";
    // auto [name, age, roll] = t;
    // cout << name << " " << age << " " << roll << "\n";

    // pair<int, pair<string, double>> student;
    // student = {101, {"alim", 3.75}};

    // cout << student.first << " " << student.second.first << " " << student.second.second << "\n";   
        return 0;
}


Vector
   





#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    //   vector<int> v(n,5); // initialize all elements with 5

    // for(auto x:v){
    //     cout << x << " "; 
    // }
    cout << "\n";
    // cout << "front " << v.front() << "\n";
    // cout << "back " << v.back() << "\n";
    // cout << "size " << v.size() << "\n";    
    // cout <<  "empty " << v.empty() << "\n"; // 0 means false, 1 means true
    //  v.clear();
    // cout << "size after clear " << v.size() << "\n";

    // v.resize(5); // resize vector to size 5

    //begin end rbegin rend

    // cout << "begin iterator" <<  *v.begin() << "\n";
    // cout << "last element using end-1 " << *(v.end() - 1) << "\n";
    // cout << "reverse begin iterator " << *v.rbegin() << "\n";   
    // cout << "reverse end iterator " << *(v.rend() - 1) << "\n";

    // for (auto i = v.begin(); i != v.end(); i++){
    //     cout << *i << " ";
    // }

    // cout << *--v.end() << "\n"; // last element

    // reverse(v.begin()+2, v.end());
    // sort(v.begin(), v.end());
    // sort(v.begin(), v.end(), greater<int>());
    for (auto x : v) {
        cout << x << " ";
    }

    // auto mx = *max_element(v.begin(), v.end());
    // auto mn = *min_element(v.begin(), v.end());
    // auto maxElemIndex = max_element(v.begin(), v.end()) - v.begin();

     //insert,erase-->  best use in array
     v.insert(v.begin() + 2, 10); // insert 10 at index 2

     v.erase(v.begin() + 4); // erase element at index 4
     auto nextOfBegin = *v.begin() + 1; // we cannot do it in set multiset and in map
     cout << "\n";
     for (auto x : v)
     {
         cout << x << " ";
     }
      v.erase(v.begin() + 3);
  
      cout << "\n";
      return 0;
}


Deque

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //  deque -- >double ended queue
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(5);
    dq.push_back(20);
    dq.push_front(1);
    dq.push_back(30);
    dq.push_front(2);
    dq.pop_back();
    dq.pop_front();
    for(auto x:dq){
        cout << x << " ";
    }
    cout << "\n";
    cout << "front " << dq.front() << "\n";
    cout << "back " << dq.back() << "\n";
    dq.insert(dq.begin()+1,15); // insert 15 at index 1
    //deque // extra memory use that is drawback
        return 0;
}

String

 


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        s.push_back(c);
        //    s.pop_back(); // remove last character
    }

    for(int i=0;i<s.size();i++){
        cout << s[i] << " ";
    }
    // cout << "\n";
    // cout << "front " << s.front() << "\n";
    // cout << "back " << s.back() << "\n";
    // s.pop_back(); // remove last character
   
    string str = s.substr(0,2);
    cout << "\n" << str << "\n";
     
    cout << "\n";
       for(int i=0;i<s.size();i++){
        cout << s[i] << " ";
    }
   cout << s.empty(); // if string is empty return 1 else 0

        return 0;
}




2D Vector
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int  n;
    cin >> n;

    // vector<vector<int>> v(n, vector<int>(m));
    // for (int i = 0; i < n; i++) {

    //     cin >> m;
    //     for (int j = 0; j < m; j++) {
    //         cin >> v[i][j];
    //     }
    // }

    vector<vector<int>> v;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        vector<int> v2;
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            v2.push_back(x);
        }
          
        for(auto x : v2) {
            cout << x << " ";
        }

         cout << '\n';
        
        v.push_back(v2);
    }
    return 0;
}


Set And MultiSet
 





#include <bits/stdc++.h>
using namespace std;

//multiset
// sorted non unique elements


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<int> ms;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;       
        ms.insert(x); // O(log n)
    }
    // if want to erase single in many occurence of particular element
    // auto it = ms.find(3); // it will return first occurence of 3
    // if(it != ms.end()){
    //     ms.erase(it); // erase only first occurence of 3
    // }
    // ms.erase(5); // it will erase all occurence of 5
    for(auto x:ms){
        cout << x << "\n";
    }

  auto p =   ms.count(3);

  //complexity of count is O(log n) 
  //if multiple occurence then O(log n) + O(k) where k is number of occurence
  
  // it will return how many occurence of 3 present in multiset
  cout << p;

  return 0;
}



Map
  



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //map is used for key value pair
    //always sorted based on key and unique keys
    // if we keep differnt values for same key , it will consider last value only

    map<int, int> mp;
    mp.insert({51, 10});  //set and map are used insert
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
         //  Returns an iterator to the first element whose key is NOT LESS THAN key
       // (i.e. >= key)
       
       auto it = mp.lower_bound(5); // >= 5 
       cout << "Lower bound of 5: " << it->first << "==>" << it->second << "\n";
       auto  i = mp.upper_bound(9); // >  strictly upper value  9 ans
        // Returns an iterator to the first element whose key is GREATER THAN key
       // (i.e. > key)
         cout << "Upper bound of 5: " << i->first << "==>" << i->second << "\n";
       return 0;
}


Priority_Queue
  


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq; // Min-heap
    pq.push(5);
    pq.push(2);
    pq.push(8); 
    pq.push(1);

    while (!pq.empty()) {
        cout << pq.top() << " "; // Outputs: 8 5 2 1 we
         //just get the top from the top of the priority queue
        pq.pop(); 
    }   
    cout << "size ==>" << pq.size() << endl; // Outputs: 0, since we popped all elements
    return 0;
}





