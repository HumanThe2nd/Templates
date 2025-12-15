// LCM template in C
// Author: Dan Shan
// Date: 2025-12-15
int gcd(int a, int b){
	if(b > a){ // make a the larger
		int temp = b;
		b = a; a = temp;
	}
	while(b){
		int r = a % b;
		a = b; b = r;
	}
	return a;
}
int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}
