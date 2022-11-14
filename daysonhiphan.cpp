#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a1[n+1], a2[n+1];
		for(int i = 0; i < n; i++){
			cin >> a1[i];
		}
		for(int i = 0; i < n; i++){
			cin >> a2[i];
		}
		
		int res = 0;
		for(int i = 0; i < n; i++){
			int sum1 = 0;
			int sum2 = 0 ;
			for(int j = i; j < n; j++){
				sum1 += a1[j];
				sum2 += a2[j];
				if(sum1 == sum2){
					int len = j - i +1;
					if(len > res){
						res = len;
					}
				}
			}
		}
		cout << res << endl;
	}
}