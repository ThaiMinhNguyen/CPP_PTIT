#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		long long a[n];
		int b[m];
		vector<int> s;
		vector<int> k;
		for(int i = 0 ;i < n; i++){
			cin >> a[i];
		}
		int min = 0;
		for(int i = 0 ;i < m; i++){
			cin >> b[i];
			if(min > b[i]){
				min = b[i];
			}
		}
		for(int j = 0; j < m; j++){
			for(int i = 0; i <n; i++){
				if(a[i] == b[j]){
					s.push_back(b[j]);
					a[i] = min - 1;
				}
			}
		}
		sort(a, a+n);
		for(int i = 0 ;i < n; i++){
			if(a[i] > min){
				k.push_back(a[i]);
			}
		}
		for(auto x: s){
			cout << x << " ";
		}
		for(auto x: k){
			cout << x << " ";
		}
		cout << endl;
	}
}