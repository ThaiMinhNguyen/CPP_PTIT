#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int max = 0;
		for(int i = 0;i < n; i++){
			cin >> a[i];
		}
		for(int i = 0;i < n; i++){
			for(int j = i+1;j < n; j++){
				int check = a[j] - a[i];
				if(max < check){
					max = check;
				}
			}
		}
		if(max > 0){
			cout << max << endl;
		} else {
			cout << -1 << endl;
		}
	}
}