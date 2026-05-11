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
    // cout << node << endl;
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

class Edge{
    public:
        int a, b, c;
        Edge(int a,int b,int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }
};

bool cmp(Edge l,Edge r){
    return l.c < r.c;
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> edge_list;

    memset(par, -1, sizeof(par));
    for (int i = 0; i < 1005; i++) {
    groupSize[i] = 1;
    }
    while(e--){
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }

    sort(edge_list.begin(), edge_list.end(), cmp);
    int total_cost = 0;

    for (auto ed: edge_list){
        int parA = find(ed.a);
        int parB = find(ed.b);
        if(parA != parB){
            dsu_union(ed.a, ed.b);
            total_cost += ed.c;
        }
    }

    cout << "the total cost ==>" << total_cost << endl;
}
