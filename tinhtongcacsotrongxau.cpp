#include<bits/stdc++.h>

using namespace std;

int tong(string s){
	int sum = 0;
	int i = 0;
	int n;
	string l;
	while(i < s.length()){
	 	l.clear();
		for(n = i;n < s.length(); n++){
			if(s[n] >= '0' && s[n] <= '9'){
				l = l + s[n];
				break;
			}
		}
		for(i=n+1;i < s.length(); i++){
			if(s[i] >= '0' && s[i] <= '9'){
				l = l + s[i];
			} else break;
		}
		int k = stoi(l);
		sum+=k;
	}
	return sum;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << tong(s) << endl;
	}
}