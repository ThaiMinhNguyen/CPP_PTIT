#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<string> v;
		set<char> m;
//		for(int i = 0; i < n; i++){
//			string s;
//			cin >> s;
//			v.push_back(s);
//		}
//		for(int i = 0; i < v.size(); i++){
//			cout << v[i];
//		}
//		for(int i = 0; i < v.size(); i++){
//			for(int j = 0; j < v[i].size();j++){
//				m.insert(v[i][j]);
//			}
//		}
		cin.ignore();
		string s;
		getline(cin , s);
		for(int i = 0;i < s.length();i++){
			if(s[i] != ' '){
				m.insert(s[i]);
			}
		}
		for(char x: m){
			cout << x << " ";
		}
		cout << endl;
	}
}