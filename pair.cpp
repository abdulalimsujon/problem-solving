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

    pair<int, pair<string, double>> student;
    student = {101, {"alim", 3.75}};

    cout << student.first << " " << student.second.first << " " << student.second.second << "\n";   
        return 0;
}
