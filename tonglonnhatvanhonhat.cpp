#include<bits/stdc++.h>

using namespace std;

string tinhtong(string a, string b){
	string res;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	if(a.length() > b.length()){
		swap(a, b);
	}
	int nho = 0;
	for(int i = 0; i < a.length();i++){
		int s = ((a[i] - '0') + (b[i] - '0') + nho);
		if(s >= 10){
			s = s%10;
			nho = 1;
		}
		res = res + (char)(s+'0');
	}
	for(int i = a.length(); i < b.length(); i++){
		int s = ((b[i] - '0') + nho);
		if(s > 10){
			s = s%10;
			nho = 1;
		}
		res = res + (char)(s+'0');
	}
	if(nho == 1){
		res = res + '1';
	}
	reverse(res.begin(), res.end());
	return res;
}

void doi5thanh6(string &s){
	for(int i = 0; i < s.size();i++){
		if(s[i] == '5'){
			s[i] = '6';
		}
	}
}

void doi6thanh5(string &s){
	for(int i = 0; i < s.size();i++){
		if(s[i] == '6'){
			s[i] = '5';
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		doi6thanh5(a);doi6thanh5(b);		
		cout << stoll(tinhtong(a, b)) << " ";
		doi5thanh6(a);doi5thanh6(b);
		cout << stoll(tinhtong(a, b)) << endl;
	}
}