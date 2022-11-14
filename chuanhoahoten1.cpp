#include<bits/stdc++.h>

using namespace std;

void to_lower(string &s){
	for(int i = 0; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}	
}
void to_upper(string &s){
	for(int i = 0; i < s.length(); i++){
		s[i] = toupper(s[i]);
	}	
}

void toUpperFirstLetter(string &s){
	s[0] = toupper(s[0]);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a;
		string s;
		vector<string> res;
		cin >> a;
		cin.ignore();
		getline(cin , s);
		to_lower(s);
		stringstream is(s);
		while(is>>s){
			toUpperFirstLetter(s);
			res.push_back(s);
		}
		if(a==1){
			cout << res[res.size()-1] << " ";
			for(int i = 0; i < res.size()-1; i++){
				cout << res[i] << " ";
			}
		}
		if(a==2){
			for(int i = 1; i < res.size(); i++){
				cout << res[i] << " ";
			}
			cout << res[0];
		}
		cout << endl;
	}
}