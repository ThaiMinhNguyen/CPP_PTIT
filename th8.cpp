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
		sort(a, a+n);
		int r = 0;
		for(int i = 0; i < n-1; i++){
			int c = a[i+1]-a[i] - 1;
			if(c == 0;c==-1) continue;
			else {
				r+=c;
			}
		}
		cout << r << endl;
	}
}