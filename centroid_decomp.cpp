// Template for centroid decomposition
// Note: this does not include distances
// Author: Dan Shan
#include <bits/stdc++.h>
using namespace std;
const int MM = 1e5+2;

vector<int> adj[MM], adj2[MM];
int sz[MM];
bool cent[MM];

void dfs(int s, int p){
    sz[s]=1;
    for(auto x: adj[s]){
        if(x==p||cent[x]) continue; // ignore parent  && centroids
        dfs(x,s);
        sz[s]+=sz[x];
    }
}
int fc(int s, int p, int n){
    for(auto x: adj[s]){
        if(x==p||cent[x]) continue;
        if(sz[x]>n/2) return fc(x,s,n);
    }
    return s;
}
int decomp(int root){
    dfs(root,-1);
    int cen = fc(root,-1,sz[1]);
    cent[cen]=1;
    for(auto x: adj[cen]){
        if(cent[x]) continue;
        int sub=decomp(x);
        adj2[cen].emplace_back(sub);
        adj2[sub].emplace_back(cen);
    }
    return cen;
}
