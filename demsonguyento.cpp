#include<bits/stdc++.h>

using namespace std;

bool ktra(int a){
	if(a < 2) return false;
	else {
		for( int i = 2; i <= sqrt(a); i++){
			if(a % i == 0) return false;
		}
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		int count = 0;
		for(int i = a; i <=b; i++){
			if(ktra(i)) count++;
		}
		cout << count << endl;
	}
}