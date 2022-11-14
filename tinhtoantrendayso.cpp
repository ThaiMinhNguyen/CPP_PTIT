#include<bits/stdc++.h>
using namespace std;

#define mdl 1000000007

long long mu(long long a, int b){
	long long res = 1;
	while(b>0){
		res = ((res%mdl)*(a%mdl))%mdl;
		b--;
	}
	return res;
}

int maxGCD(int a[], int n){ 
	int m = 0;
	for(int i = 0; i < n; i++){
		m = max(m ,a[i]);
	}
//	int m = a[n-1];
	int d[m+1] = {0};
	for(int i = 0; i < n; i++){
		for(int j = 1 ; j <= sqrt(a[i]);j++){
			if(a[i] % j == 0){
				d[j]++;
			}
			if(j!= a[i]/j){
				d[a[i]/j]++;
			}
		}
	}
	for(int i = m; i > 0 ; i--){
		if(d[i] >1){
			return i;
		}
	}
}

int maxGCDofArray(int a[], int n){
	sort(a, a+n);
	int min = a[0];
	int max = a[n-1];
	for(int i = min; i>0; i--){
		if(min % i == 0 && max % i==0 ){
			return i;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		long long tich = 1;
		for(int i = 0 ;i < n; i++){
			cin >> a[i];
			tich *= a[i];
		}
		int gcd = maxGCDofArray(a, n);
//		for(int i = 0; i < n; i++){
//			for(int j = 0;j < n; j++){
//				if(j == i){
//					continue;
//				} else {
//					int s = __gcd(a[i], a[j]);
//					if(gcd < s){
//						gcd = s;
//					}
//				}
//			}
//		}
//		cout << tich << "\t" << gcd << endl;
//		cout << gcd << endl;
		cout << mu(tich, gcd) << endl;
	}
}