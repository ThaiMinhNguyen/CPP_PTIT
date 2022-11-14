#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		map<int, int> mp;
		int n;
		cin >> n;
		int a[n+1][n+1];
		int count = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0 ; j < n; j++){
				cin >> a[i][j];
				mp[a[i][j]] = 0;
			}
		}
		for(int i = 0; i < n; i++){
			for(int j =  0; j < n; j++){
				if(a[i][j] == -1) continue;
				for(int s =  j+1; s < n; s++){
					if(a[i][j] == a[i][s]){
						a[i][s] = -1;
					}
				}
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0 ; j < n; j++){
				mp[a[i][j]] ++;
				if(mp[a[i][j]] == 4){
					count ++;
				}
			}
		}
//		for(int i = 0; i < n; i++){
//			for(int j = 0 ; j < n; j++){
//				cout << a[i][j] << " ";
//			}
//			cout << endl;
//		}
		cout << count << endl;
	}
}