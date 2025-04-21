/*
Disjoint Set template in C
Author: HumanThe2nd
Date: 2025-04-21
Note: this code pre-initializes parent & rank arrays (for simplicity)
*/
#include <stdio.h>
#include <stdlib.h>
#pragma GCC optimize ("Ofast")
int n,m,p[100001],r[100001]; // pre-initialization
int f(int ai){ // find
    if(p[ai]==ai) return ai;
    return p[ai]=f(p[ai]);
}
void u(int ai, int bi){ // union
    ai=f(ai);
    bi=f(bi);
    if(r[ai]<r[bi]){ // path compression
        p[ai]=bi;
    }
    else {
        if(r[ai]==r[bi]) r[ai]++;
        p[bi]=p[ai];
    }

}
int main() {
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) p[i]=i; // initialize parent array
    for(int i=0;i<m;i++){
        char s[2];
        int ai,bi;
        scanf("%s %d %d",s,&ai,&bi);
        if(s[0]=='Q') puts(f(ai)==f(bi)?"Y":"N"); // query connectivity
        else u(ai,bi); // connect paths
    }
}
