#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
		}
		sort(a, a+n);
		sort(b, b+m);
		set<int>u;
		for(int i = 0; i < n; i++){
			u.insert(a[i]);
		}
		for(int i = 0; i < m; i++){
			u.insert(b[i]);
		}
		set<int>is;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i] == b[j]){
					is.insert(a[i]);
				}
			}
		}
		for(auto x:u){
			cout << x << " ";
		}
		cout << endl;
		for(auto x:is){
			cout << x << " ";
		}
		cout << endl;
	}
}