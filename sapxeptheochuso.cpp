#include<bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
	string ab;
	ab = a + b;
	string ba;
	ba = b + a;
	if(ab.compare(ba)>0){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int s;
		cin >> s;
		vector<string> res;
		for(int i = 0; i < s; i++){
			string r;
			cin >> r;
			res.push_back(r);
		}
		sort(res.begin(), res.end(), cmp);
		for(auto x:res){
			cout << x;
		}
		cout << endl;
	}
}