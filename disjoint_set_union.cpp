#include<bits/stdc++.h>
using namespace std;
int par[1005];
int groupSize[1005];
int find(int node)
{
    // while(par[node] != -1){
    //     cout << node << endl;
    //     node = par[node];
    // }
    // return node;

   //recursion with optimization
    cout << node << endl;
    if (par[node] == -1)
    {
        return node;
    }
    int leader =  find(par[node]); //complexity oder of logn
    par[node] = leader;
    return leader;
}

//union by size
void dsu_union(int node1,int node2){
    int leader1 = find(node1);
    int leader2 = find(node2);
   
    if(groupSize[leader1] > groupSize[leader2]){
        par[leader2] = leader1;
        groupSize[leader1] += groupSize[leader2];
    }
    else
    {
           par[leader1] = leader2;
        groupSize[leader2] += groupSize[leader1];
    }
}

int main()
{
    memset(par, -1, sizeof(par));
    memset(groupSize, -1, sizeof(groupSize));

    dsu_union(1, 2);
    for (int i = 0; i < 6;i++){
        cout << i << "==>" << par[i] << endl;
    }



    return 0;
}
