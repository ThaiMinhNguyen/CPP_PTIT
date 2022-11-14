#include<bits/stdc++.h>

using namespace std;

int search(int a[], int l, int r, int x){
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

int kt(int a[],int n, int x){
	sort(a, a+n);
	int check = -1;
	if(a[0] + a[n-1] < x){
		return check;
	}
	for(int i = 0; i < n; i++){
		int s = a[i]+x;
		if(search(a,0,n-1,s)==1){
			check = 1;
			return check;
		}
	}
	return check;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << kt(a, n, x) << endl;
	}
}