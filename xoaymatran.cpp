#include<bits/stdc++.h>

using namespace std;

//void doi(int n, int m, int a[][]){
//	int hang = 0;
//	int cot = 0;
//	int prev, crt;
//	while(hang < n && cot < m){
//		if(hang+1==n && cot + 1 == m){
//			break;
//		}
//		prev =	a[hang][cot+1];
//		for(int i = hang; i < m; i++){
//			crt = a[hang][i];
//			a[hang][i] = prev;
//			prev = crt;
//		}
//		hang++;
//		for(int i = cot; i < n; i++){
//			crt = a[i][m-1];
//			a[i][m] = prev;
//			prev = crt;
//		}
//		m--;
//		if(hang < n){
//			for(int i = m-1; i >= cot; i--){
//				crt = a[m-1][i];
//				a[m-1][i] = prev;
//				prev = crt;
//			}
//		}
//		n--;
//		if(cot < m){
//			for(int i = n-1; i >=hang; i--){
//				crt = a[i][cot];
//				a[i][cot] = prev;
//				prev = crt;
//			}
//		}
//		cot++;
//	}	
//}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		int s1 = n;
		int s2 = m;
		int hang = 0;
		int cot = 0;
		int prev, crt;
		while(hang < n && cot < m){
			if(hang + 1 == n && cot + 1 == m){
				break;
			}
			prev =	a[hang+1][cot];
			for(int i = cot; i < m; i++){
				crt = a[hang][i];
				a[hang][i] = prev;
				prev = crt;
			}
			hang++;
			for(int i = hang; i < n; i++){
				crt = a[i][m-1];
				a[i][m-1] = prev;
				prev = crt;
			}
			m--;
			if(hang < n){
				for(int i = m-1; i >= cot; i--){
					crt = a[n-1][i];
					a[n-1][i] = prev;
					prev = crt;
				}
			}
			n--;
			if(cot < m){
				for(int i = n-1; i >=hang; i--){
					crt = a[i][cot];
					a[i][cot] = prev;
					prev = crt;
				}
			}
			cot++;
		}	
		for(int i = 0 ; i < s1; i++){
			for(int j = 0; j < s2; j++){
				cout << a[i][j] << " ";
			}
		}
		cout << endl;
	}
}