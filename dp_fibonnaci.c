// Dynamic Programming optimzed fibonnaci calculator
// Author: Dan Shan
// Date: 2024-09-06
#include <stdio.h>
int dp[100];
int fib(int n) {
    if(n==2||n==1) return n-1;
    if(!dp[n-1]) dp[n-1]=fib(n-1);
    if(!dp[n-2]) dp[n-2]=fib(n-2);
    return dp[n-1]+dp[n-2];
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fib(n));
    return 0;
}
