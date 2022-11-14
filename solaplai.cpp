#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; 
	cin >> n;
	while(n--){
		long long a, x, y;
		cin >> a >> x >> y;
		long long s = __gcd(x,y);
		while(s--){
			cout << a;
		}
		cout<<endl;
	}
}