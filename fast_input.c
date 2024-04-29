// macro faster for small inputs and methods faster for larger inputs theoretically
// macro scan
#define mscan(x) do{while((x=getchar_unlocked())<'0'); for(x-='0'; '0'<=(_=getchar_unlocked()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
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
int a = scan();
int b = nscan();
int c;
scan(c);
}
