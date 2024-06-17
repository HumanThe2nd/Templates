class ds{
	std::vector<int> p; // parent
public:
	ds(int n){ // constructs a disjoint set
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
