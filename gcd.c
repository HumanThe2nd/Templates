// Euclidation algorithm to compute gcd
long long gcd(long long a, long long b){
	if(b>a){ // make a the larger
		long long temp=b;
		b=a; a=temp;
	}
	while(b){
		long long r=a%b;
		a=b; b=r;	
	}
	return a;
}
