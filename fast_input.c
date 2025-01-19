/*
Fast Input templates
Author: Dan Shan
Last Updated: 2025-01-18
*/

// macro faster for small inputs and methods faster for larger inputs theoretically
// macro scan
#define mscan(x) do{while((x=getchar_unlocked())<'0'); for(x-='0'; '0'<=(_=getchar_unlocked()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;

// scanner using pointers (fastest in this code)
#define bs 1<<20 // buffer size
char buf[bs];
char *ptr = buf;
void buff(){
    fread(buf,1,bs,stdin);
}
long long fscan(){ // fast input template
    long long num=0;
    while(*ptr<'0'||*ptr>'9')++ptr; // Skip non-digit characters
    while(*ptr>='0'&&*ptr<='9') {
        num=num*10+(*ptr-'0');
        ++ptr;
    }
    return num;
}
// method scanner
int scan() {
    int num = 0;
    char c = getchar_unlocked();
    while (c>'9'||c<'0') c = getchar_unlocked();
    while (c>='0'&&c<='9') {
        num=num*10+c-'0';
        c=getchar_unlocked();
    }
    return num;
}
// method scanner with negatives
int nscan() {
    int n = 0, a = 0;
    char c = getchar_unlocked();
    if (c == '-') n = 1, c = getchar_unlocked();
    while('0' <= c && c <= '9') a = a * 10 + c - '0', c = getchar_unlocked();
    return n ? -a : a;
}
// reference
int main(){
int a = fscan();
int b = scan();
int c;
scan(c);
int d=nscan();
}
