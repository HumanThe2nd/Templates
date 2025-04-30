/*
Fast Modulus Exponents
Author: HumanThe2nd
Date: 2025-04-30
Time Complexity: O(log(e))
*/
#include <stdio.h>
typedef long long ll;
ll mod_pow(ll b,int e,ll mod){ // fast exponent with modulus
    ll res=1;
    b%=mod;
    while(e>0) {
        if (e&1)  // If exponent is odd
            res=(res*b)%mod;

        b=(b*b)%mod;
        e>>=1;
    }

    return res;
}
