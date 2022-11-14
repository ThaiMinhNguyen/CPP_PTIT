#include<bits/stdc++.h>

using namespace std;

bool check(string s){
	int le = 0;
	int chan = 0;
	for(int i = 0; i < s.length(); i++){
		if(i%2==0){
			chan +=  (int) s[i] - '0';
		} else {
			le +=  (int) s[i] - '0';
		}
	}
	if(abs(chan-le)%11==0) return 1;
	else return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string n;
		cin >> n;
		cout << check(n) << endl;
	}
}