#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i= 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		int s = n/2;
		if(n%2==0){
			for(int i = 0 ; i < s;i++){
				cout << a[n-i-1] << " " << a[i] << " ";
			}
		} else {
			for(int i = 0 ; i < s; i++){
				cout << a[n-i-1] << " " << a[i] << " ";
			}
			cout << a[s];
		}
		cout << endl;
	}
}