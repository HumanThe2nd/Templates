// Fibonnaci
// Naive recursion approach to computing fibonnaci numbers
// Author: Dan Shan
// Date: 2024-09-06
// Naive solution for fibonacci sequence
// Time complexity: O(2^n)
#include <stdio.h>
int fib(int n) {
    if(n==2||n==1) return n-1;
    return fib(n-1)+fib(n-2);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fib(n));
    return 0;
}
