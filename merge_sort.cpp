#include<bits/stdc++.h>
using namespace std;
int arr[5005];

void devide(int l,int r){
    for (int i = l; i <=r;i++){

        cout << arr[i] << " ";
     
    }
       cout << endl;

        if (l >= r)
        {
            return;
        }
    int mid = (l + r) / 2;
    devide(l, mid);
    devide(mid + 1, r);
}
int main(){

    // this is conquer part
    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n;i++){
    //     cin >> a[i];
    // }
    // int m;
    // cin >> m;
    // int b[m];
    // for (int i = 0; i < m; i++)
    // {
    //     cin >> b[i];
    // }

    // int c[n + m];
    // int i=0, j=0, curr=0;
    // while(i<n && j < m){
    //     if(a[i]<b[j]){
    //         c[curr] = a[i];
    //         i++;
    //         curr++;
    //     }else{
    //         c[curr] = b[j];
    //         curr++;
    //         j++;
    //     }
    // }

    // while(i<n){
    //     c[curr] = a[i];
    //     i++;
    //     curr++;
    // }
    
    // while(j<m){
    //     c[curr] = b[j];
    //     j++;
    //     curr++;
    // }

    // for (int i = 0; i < n+m;i++){
    //     cout  << c[i] << " ";
    // }


    // this is devide for shorted array

    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    devide(0, n - 1);
}
