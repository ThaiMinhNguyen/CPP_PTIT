#include<bits/stdc++.h>

using namespace std;

long long gt(int n){
	long long r = 1;
	for(int i = 2; i <= n;i++){
		r*=i;
	}
	return r;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int a, p;
		cin >> a >> p;
		int x = 0;
		for(int i = 2; i <= a;i++){
			int c = i;
			while(c%p==0){
				x++;
				c/=p;
			}
		}
		cout << x << endl;
	}
}