#include<bits/stdc++.h>

using namespace std;

string sum(string a, string b){
	if(a.length() > b.length()){
			swap(a, b);
	}
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	string res = "";
	int carry = 0;
	for(int i = 0; i < a.length();i++){
		int m = (a[i]-'0') + (b[i] - '0') + carry;
		carry = m/10;
		m = m % 10;
		res = (char)(m +'0') + res;
	}
	for(int i = a.length(); i < b.length();i++){
		int m = (b[i] - '0') + carry;
		carry = m/10;
		m = m % 10;
		res = (char)(m +'0') + res;
	}
	if(carry == 1){
		res = '1' + res;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		cout << sum(a, b) << endl;
	}
}