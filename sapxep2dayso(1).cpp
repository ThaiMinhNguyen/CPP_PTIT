#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n];
		int b[m];
		vector<int> s;
		vector<int> k;
		map<int, int> mp;
		for(int i = 0 ;i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		for(int i = 0 ;i < m; i++){
			cin >> b[i];
		}
		for(int j = 0; j < m; j++){
			if(mp[b[j]] > 0){
				while(mp[b[j]] > 0){
					s.push_back(b[j]);
					mp[b[j]]--;
				}
			}
		}
		sort(a, a+n);
		for(int i = 0 ;i < n; i++){
			if(mp[a[i]] > 0){
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