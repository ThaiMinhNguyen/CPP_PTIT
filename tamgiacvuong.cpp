#include<bits/stdc++.h>

using namespace std;

int search(long long a[], int l, int r, long long x){
	if(r >= l){
		int mid = l+(r-l)/2;
		if(a[mid]==x){
			return 1;
		}
		if(a[mid] < x){
			return search(a, mid+1, r, x);
		}
		return search(a, l, mid-1, x);
	}
	return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i =0 ; i < n; i++){
			cin >> a[i];
			a[i] = a[i]*a[i];
		}
		sort(a, a+n);
		int check = 0;
		for(int i = 0; i < n; i++){
			if(check == 1) break;
			for(int j = i+1; j<n; j++){
				long long s = a[i]+a[j];
				if(search(a,0, n-1,s)==1){
					check = 1;
					break;
				}
			}
		}
		if(check == 1){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}