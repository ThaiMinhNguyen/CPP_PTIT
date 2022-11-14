#include<bits/stdc++.h>

using namespace std;

long long mod(string s, long long n){
	long long res = 0;
	for(int i = 0; i < s.length(); i++){
		res = (res*10+(int)s[i]-'0')%n;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		long long n;
		cin >> s >> n;
		cout << mod(s, n) << endl;
	}
}