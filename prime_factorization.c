long long primefac(long long n){
	long long m=-1;
	while(!(n&1)){
		m=2;
		n>>=1;
	}
	for(int i=3;i<=sqrt(n);i+=2){
		while(n%i==0){
			m=i;
			n/=i;
		}
	}
	if(n>m) m=n; // remainder could also be a larger prime
	return m;
}
