#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n+1];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		int s = n-1;
		while(k){
			cout << a[s--] << " ";
			k--;
		}
		cout << endl;
	}
}