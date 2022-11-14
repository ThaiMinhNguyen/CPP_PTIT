#include<bits/stdc++.h>

using namespace std;

int doi(string s){
	int res = 0;
	for(int i = 0; i < s.size(); i++){
		res = res*10 + (int)(s[i]-'0');
	}
	return res;
}

int main(){
	string s = "021";
	int k = doi(s);
	cout << k;
}