#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n][n];
		int count = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0 ; j < n; j++){
				cin >> a[i][j];
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
//		for(int i = 0; i < n; i++){
//			for(int j = 0 ; j < n; j++){
//				cout << a[i][j] << " ";
//			}
//			cout << endl;
//		}
//		for(int j = 0; j < n; j++){
//			for(int i =  0; i < n; i++){
//				if(a[i][j] == -1) continue;
//				for(int s =  i+1; s < n; s++){
//					for(int)
//					if(a[i][j] == a[s][j]){
//						count++;
//					}
//				}
//			}
//		}
		for(int j = 0; j < n;j++){
			//if(a[1][j] == -1) continue;
			int check = 0;
			for(int s = 1; s < n; s++){
				for(int m = 0; m < n; m++){
					if(a[0][j] == a[s][m] && a[s][m] != -1){
						check++;
					}
				}
			}
			if(check == 3){
				count++;
			};
		}
		cout << count << endl;
	}
}