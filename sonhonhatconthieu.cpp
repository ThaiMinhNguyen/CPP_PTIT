#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0;i < n-1;i++){
			cin >> a[i];
		}
		sort(a, a+n-1);
//		for(auto x:a){
//			cout << x << endl;
//		}
		for(int i = 0;i < n;i++){
			if(a[i+1] - a[i] > 1){
				cout << a[i] + 1 << endl;
				break;
			}
		}
	}
}