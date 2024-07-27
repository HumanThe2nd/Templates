#include <stdio.h>
int main(){
  short a; // read short
  scanf("%hd",a);
  char s[1001]; // read line as string
  scanf("%[^\n]%*c", s);
}
