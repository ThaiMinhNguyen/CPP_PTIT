#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		int k;
		cin >> s >> k;
		int count = 0;
		for(int i = 0; i <= s.length();i++){
			set<char> res;
			for(int j = i ; j < s.length();j++){
				res.insert(s[j]);
				if(res.size() == k){
					count ++;
				}
				if(res.size() > k){
					break;
				}	
			}
			
//			res.clear();
		}
		cout << count << endl;
	}
}