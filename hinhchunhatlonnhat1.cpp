#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n][m];
		int phantu = n;
		int res = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0 ; j < m; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 0; i < m; i++){
			int check = 1;
			for(int j = 0; j < n;j++ ){
				if(a[j][i] == 0){
					check = 0;
					break;
				}
			}
			if(check == 1){
				res += phantu;
			}
		}
		cout << res << endl;
	}
}