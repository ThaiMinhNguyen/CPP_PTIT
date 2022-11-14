#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n][m];
		int b[n][m] = {0};
		for(int i = 0; i < n ; i++){
			for(int j = 0; j < m;j++){
				cin >> a[i][j];
			}
		}
		for(int i = 0; i < n ; i++){
			for(int j = 0; j < m;j++){
				if(a[i][j] == 1){
					for(int s = 0; s < n; s++){
						b[s][j] = 1;
					}
					for(int s = 0; s < m; s++){
						b[i][s] = 1;
					}
				}
			}
		}
		for(int i = 0; i < n ; i++){
			for(int j = 0; j < m;j++){
				cout << b[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}