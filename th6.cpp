#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int check = -1;
		for(int i = 0; i < n; i++){
			if(check != -1){
				break;
			}
			for(int j = i+1; j < n; j++){
				if(a[i] == a[j]){
					check = a[i];
					break;
				}
			}
		}
		if(check!= -1){
			cout << check << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}