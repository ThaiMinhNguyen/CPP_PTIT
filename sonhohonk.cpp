#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		int dem = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] <= x){
				dem++;
			}
		}
		int min = 0;
		int j;
		for(int i = 0; i < dem; i++){
			if(a[i] > x){
				min++;
			}
		}
		int ans = min;
		for(int i = 0,j = dem;j < n; i++, j++){
			if(a[i] > x){
				min--;
			}
			if(a[j] > x){
				min++;
			}
			if(ans > min){
				ans = min;
			}
		}
		cout << ans << endl;
	}
}