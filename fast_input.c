// scans an integer until a non-numeric character is reached
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
// accounts for negatives
int nscan() { // scans negatives. 
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
}
