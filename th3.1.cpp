#include<bits/stdc++.h>

using namespace std;

void mahoa(string &s){
	for(int i = 0; i < s.length(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			if(s[i] > 'B'){
				s[i] = s[i] - 2;
			} else {
				s[i] = s[i] + 24;
			}
		}
		else if(s[i] >= 'a' && s[i] <= 'z'){
			if(s[i] < 'y'){
				s[i] = s[i] + 2;
			} else if(s[i]) {
				s[i] = s[i] - 24;
			}
		}
	}
}

int main(){
	string s;
	getline(cin , s);
	mahoa(s);
	cout << s;
}