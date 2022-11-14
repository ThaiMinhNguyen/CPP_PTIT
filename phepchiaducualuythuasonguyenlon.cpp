#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll power(long long x, long long n, long long m)
{
    ll result = 1;
    while(n>0){
    	result = ((result % m) * (x % m)) % m;
    	n--;
	}
    return result;
}

long long mod(string s, long long n){
	long long res = 0;
	for(int i = 0; i < s.length(); i++){
		res = (res*10+(int)s[i]-'0')%n;
	}
	return res;
}

long long mp(string s, long long n, long long m){
	return power(mod(s, m), n%(m-1), m);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		long long n, m;
		cin >> s >> n >> m;
		cout << mp(s, n, m) << endl;
	}
}