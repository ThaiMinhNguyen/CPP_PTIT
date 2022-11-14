#include<bits/stdc++.h>

using namespace std;

int main(){
	ifstream f1;
	f1.open("DATA.in");
	int n, m;
	set<int> res;
	f1 >> n >> m;
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		f1 >> a[i];
	}
	for(int i = 0; i < m; i++){
		f1 >> b[i];
		for(int j = 0; j < n; j++){
			if(b[i] == a[j]){
				res.insert(b[i]);
			}
		}
	}
	for(auto x: res){
		cout << x << " ";
	}
	f1.close();
}