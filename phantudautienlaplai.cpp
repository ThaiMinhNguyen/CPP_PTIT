#include<bits/stdc++.h>

using namespace std;

int kt(int a[], int n){
	for(int i = 1;i < n;i++){
		for(int j = i-1; j >=0; j--){
			if(a[i]==a[j]){
				return a[i];
			}
		}	
	}
	return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		cout << kt(a, n) << endl;
	}
}