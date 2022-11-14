#include<iostream>
#include<algorithm>

using namespace std;


long long BCNN(long long a, long long b){
	return (long long)a*b/__gcd(a, b);
}

long long kq(int n){
	long long a = 1;
	for(int i = 2; i <= n; i++){
			a = BCNN(a, i);
	}
	return a;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		cout << kq(a) << endl;
	}
}