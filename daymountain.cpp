#include<bits/stdc++.h>

using namespace std;

bool kt(int a[], int m, int n){
	int i;
	for(i = m+1;i <= n; i++){
		if(a[i] < a[i-1]) break;
	}
	for(int j = i+1; j <= n; j++){
		if(a[j] > a[j-1]) return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1];
		for(int i = 0; i < n;i++){
			cin >> a[i];
		}
		int l, r;
		cin >> l >> r;
//		if(l-r == 1){
//			if(a[l] > a[r]){
//				cout << "Yes" << endl;
//			} else{
//				cout << "No" << endl;
//			}
//			continue;
//		}
//		if(l-r < 1){
//			cout << "No" << endl;
//			continue;
//		}
		if(kt(a, l , r)){
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
}