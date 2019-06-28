#include<bits/stdc++.h>
using namespace std;

struct Bound {
    int up, low;
};

struct Stuff {
    string name;
    int baseAddress;
    int elemSize;
    int dim;
    vector<Bound> bound;
    vector<int> C;
    int c0;
    void init() {
    	cin >> name;
        cin >> baseAddress;
        cin >> elemSize;
        cin >> dim;
        
        C.resize(dim);
        for(int p = 0; p < dim; p++) {
        	Bound b;
        	cin >> b.low;
        	cin >> b.up;
        	bound.push_back(b);
		}
		int i = dim	- 1;		
		C[i] = elemSize;
		c0 = baseAddress - C[i]*bound[i].low;
		while(i--) {
			C[i] = C[i+1]*(bound[i+1].up - bound[i+1].low + 1);		
			c0 -= C[i]*bound[i].low;		
		}
		
	}

};

int main() {
    int N, R;
    freopen("394 - Mapmaker input.txt", "r", stdin);
    scanf("%d %d", &N, &R);
    map<string, Stuff> list;
    for(int i = 0; i < N; i++) {
        Stuff temp;
        temp.init();
		list.insert(pair<string, Stuff>(temp.name, temp));
    }
    for(int i = 0; i < R; i++) {
    	string name; cin >> name;
    	int ans = list[name].c0;
    	cout << list[name].name << "[";
    	for(int j = 0; j < list[name].dim; j++) {
    		int temp; cin >> temp;
			ans += list[name].C[j]*temp;
			printf("%d", temp);
			if(j < list[name].dim - 1)
				printf(", ");
		}
		printf("] = %d\n", ans);
	}
    
    return 0;
}
