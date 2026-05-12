#include<bits/stdc++.h>
using namespace std;
int arr[5005];

void conquer(int c[],int l,int mid,int r){

    int n = mid - l + 1;
    int a[n];

    int k = l;
    for (int i = 0; i < n;i++,k++){
        a[i] = c[k];
    }

    int m = r - mid;
    int b[m];
    for (int i = 0; i < m;i++,k++){
        b[i] = c[k];
    }

    int i=0, j=0, curr=l;
    while(i<n && j < m){
        if(a[i]<b[j]){
            c[curr] = a[i];
            i++;
            curr++;
        }else{
            c[curr] = b[j];
            curr++;
            j++;
        }
    }

    while(i<n){
        c[curr] = a[i];
        i++;
        curr++;
    }
    
    while(j<m){
        c[curr] = b[j];
        j++;
        curr++;
    }

}

void devide(int l,int r){
    // for (int i = l; i <=r;i++){

    //     cout << arr[i] << " ";
     
    // }
    //    cout << endl;

        if (l >= r)
        {
            return;
        }
    int mid = (l + r) / 2;
    devide(l, mid);
    devide(mid + 1, r);

    conquer(arr, l, mid, r);
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

        for (int i = 0; i < n;i++){
        cout << arr[i] << " "; 
    }

    return 0;
}
