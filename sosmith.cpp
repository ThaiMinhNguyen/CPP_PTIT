#include<iostream>
#include<cmath>

using namespace std;

bool snt(int a){
	if(a < 2) return false;
	else {
		for( int i = 2; i <= sqrt(a); i++){
			if(a % i == 0) return false;
		}
	}
	return true;
}

int demchuso(int n){
	int count = 0;
	while(n>0){
		count += n%10;
		n/=10;
	}
	return count;
}

int demuoc(int n){
	int count = 0;
	for(int i = 2; i<=sqrt(n); i++){
		while(n%i==0 && n > 0){
			n/=i;
			count = count + demchuso(i);
		}
	}
	if(n!=1) count += demchuso(n);
	return count;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		if((demuoc(a) == demchuso(a)) && snt(a) == 0 ){
			cout << "YES" << endl;
		} else cout << "NO" << endl;
	}
}