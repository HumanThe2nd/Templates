/*
Fast Modulus Exponents
Author: HumanThe2nd
Date: 2025-04-30
Updated formatting: 2026-08-10
Time Complexity: O(log(e))
*/
#include <stdio.h>
typedef long long ll;
ll mod = 998244353;
ll mpow(ll b, ll e){ // pow with mod 
    ll res = 1;
    b %= mod;
    if(!b) return 0;
    while(e){
        if(e & 1) res = res * b % mod;
        b = b * b % m;
        e >>= 1;
    }
    return res;
}
