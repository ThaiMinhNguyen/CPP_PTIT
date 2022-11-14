#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b+n);
		int dau;
		int cuoi;
		for(dau = 0 ; dau < n;dau++){
			if(a[dau] != b[dau]){
				break;
			}
		}
		for(cuoi = n-1 ; cuoi >= dau;cuoi--){
			if(a[cuoi] != b[cuoi]){
				break;
			}
		}
		cout << dau+1 << " " << cuoi+1 << endl;
	}
}