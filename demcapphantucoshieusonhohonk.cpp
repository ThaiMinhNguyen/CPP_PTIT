#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n];
		long long count = 0;
		for(int i = 0;i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		for(int i = 0; i < n; i++){
			int s = a[i]+m;
			int p = lower_bound(a, a+n, s) - a;
			count += (p-i-1);
		}
		cout << count << endl;
	}
}