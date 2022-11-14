#include<bits/stdc++.h>

using namespace std;

long long doi5thanh6(string a, string b){
	for(int i = 0; i < b.size();i++){
		if(b[i] == '5'){
			b[i] = '6';
		}
	}
	for(int i = 0; i < a.size();i++){
		if(a[i] == '5'){
			a[i] = '6';
		}
	}
	long long c=stoll(b);
	long long d=stoll(a);
	return c+d;
}

long long doi6thanh5(string a, string b){
	for(int i = 0; i < b.size();i++){
		if(b[i] == '6'){
			b[i] = '5';
		}
	}
	for(int i = 0; i < a.size();i++){
		if(a[i] == '6'){
			a[i] = '5';
		}
	}
	long long c=stoll(b);
	long long d=stoll(a);
	return c+d;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		cout << doi6thanh5(a, b) <<" " << doi5thanh6(a, b) <<  endl;
	}
}
