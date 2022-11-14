#include<bits/stdc++.h>

using namespace std;

int main(){
		string s;
		getline(cin , s);
		string trung;
		cin >> trung;
		stringstream is(s);
		while(is >> s){
			if(s != trung){
				cout << s << " ";
			}
		}
}