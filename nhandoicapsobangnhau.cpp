#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		vector<int>res;
		if(n==1){
			int s;
			cin >> s;
			cout << s << endl;
			continue;
		}
		for(int i=0; i < n;i++){
			cin >> a[i];
			if(a[i]==a[i-1] && a[i]!=0){
				a[i-1]*=2;
				a[i] = 0;
			}
		}
		int cnt = 0;
		for(int i=0; i < n; i++){
			if(a[i] != 0){
				res.push_back(a[i]);
			}
		}
		cnt = n - res.size();
		for(auto x:res){
			cout << x << " ";
		}
		while(cnt--) {
			cout << 0 << " ";
		}
		cout << endl;
	}
}