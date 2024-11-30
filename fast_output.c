/*
Fast output for integers in c/c++
Author: Dan Shan
Date: 2024-11-30
*/
void print(int n) {
    if(!n) putchar_unlocked('0');
    char s[10];
    int i=0;
    while(n>0){
        s[i++]=(n%10)+'0';
        n/=10;
    }
    while (--i >= 0) {
        putchar_unlocked(s[i]);
    }
    putchar_unlocked('\n');
}
