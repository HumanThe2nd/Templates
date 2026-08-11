/*
N Choose K With Mod
Author: Dan Shan
Created: Aug 10, 2026

** Notes
- Update: f's length & mod 
- Call mf once to initialize
*/
#include <stio.h>
typedef long long ll;
using namespace std;
ll mod = 998244353, f[1000002];
ll mpow(ll b, ll e){ // pow with mod 
    ll res = 1;
    b %= mod;
    if(!b) return 0;
    while(e){
        if(e & 1) res = res * b % mod;
        b = b * b % mod;
        e >>= 1;
    }
    return res;
}
void mf(int n){ // precomputation mod factorials
    f[0] = 1;
    for(int i = 1; i <= n; ++i) f[i] = i * f[i - 1] % mod;
}
ll nck(ll n, ll k){ // n choose k (mod inverse) 
    return f[n] * mpow(f[k], mod - 2) % mod * mpow(f[n - k], mod - 2) % mod;
}
