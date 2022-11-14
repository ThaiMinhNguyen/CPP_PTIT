#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int *a;
		a = new int[n];
		int count = 0;
		for(int i = 0; i < n ;i++){
			cin >> a[i];
		}
		int c;
		for(int i = 0; i < n ;i++){
			if(c) count++;
			c = 0;
			if(a[i] == -1) continue;
			for(int j = i+1; j<n;j++){
				if(a[i]==a[j]){
					c = 1;
					a[j] = -1;
					count++;
				}
			}
		}
		cout << count << endl;
	}
}