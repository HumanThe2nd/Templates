/*
C++ Disjoint set template
Author: HumanThe2nd
Date: 2025-06-17
*/
class ds{
	std::vector<int> p; // parent
public:
	ds() = default; // allows creation without initializing to vairables
	explicit ds(int n){ // constructs a disjoint set
		p.resize(n);
		for(int i=0;i<n;i++){
			p[i] = i;
		}
	}
	int f(int i){
		if(i!=p[i]){
			p[i] = f(p[i]); // find parent using DFS
		}
		return p[i];
	}
	void us(int x, int y){ // union
		p[f(x)] = f(y);
	}
};
int main(){
	vector<ds> a(100); // making 100 dsets inside vector
	for(int i=0;i<100;i++) a[i]=ds(1000);
	
	ds dset = ds(1000) // make a single dset
	return 0;
}
