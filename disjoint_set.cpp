/*
C++ Disjoint set template
Author: Dan Shan
Date: 2025-06-17
Updated: 2025-08-2025
*/
struct DSU { // Tracks size of sets (creds to GPT for help)
    int n;
    vector<int> p, sz;
    DSU(int n=0): n(n), p(n), sz(n,1) { iota(p.begin(), p.end(), 0); }
    int find(int a){ return p[a]==a ? a : p[a]=find(p[a]); }
    bool unite(int a, int b){
        a = find(a); b = find(b);
        if(a==b) return false;
        if(sz[a] < sz[b]) swap(a,b);
        p[b] = a;
        sz[a] += sz[b];
        return true;
    }
    int size(int a){ return sz[find(a)]; }
};

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

	DSU dsu(n); // single dset
	ds dset = ds(1000) // make a single dset
	return 0;
}
