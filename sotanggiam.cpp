#include<iostream>
#include<cmath>
#include<cctype>

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

bool giam(int n){
	int i = n%10;
	n=n/10;
	while(n > 0){
		if(i>=n%10){
			return false;
		}
		i = n%10;
		n=n/10;
	}
	return true;
}

bool tang(int n){
	int i = n%10;
	n=n/10;
	while(n > 0){
		if(i<=n%10){
			return false;
		}
		i = n%10;
		n=n/10;
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		int count = 0;
		for(int i = pow(10,a-1); i < pow(10,a);i++){
			if(tang(i) || giam(i)){
				if(snt(i))	count++;
			}
		}
		cout << count << endl;
	}
}