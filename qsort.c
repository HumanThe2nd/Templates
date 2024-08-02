#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a, const void* b) {
   return(*(int*)a-*(int*)b);
}
int main() {
    int n=scan();
    int a[2*n];
    for(int i=0;i<2*n;i++) a[i]=scan();
    qsort(a,2*n,sizeof(int),cmp);
}
