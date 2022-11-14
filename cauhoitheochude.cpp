#include<bits/stdc++.h>

using namespace std;

int dem(string s){
	stringstream is(s);
	int count = 0;
	while(is >> s){
		count++;
	}
	return count;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	vector<string> res;
	map<string, int> mp;
	vector<string> chude;
	vector<int> kq;
	int count = 0;
	for(int i = 0; i < t;i++){
		string s;
		getline(cin , s);
		res.push_back(s);
	}
	chude.push_back(res[0]);
	mp[res[0]] = 0;
	int i = 1;
	while(dem(res[i]) != 0){
		count++;
		i++;
	}
	count = mp[res[0]];
//	kq.push_back(mp[res[0]]);
	while(i < t){
		if(dem(res[i]) == 0){
			kq.push_back(count);
			count = 0;
			chude.push_back(res[i+1]);
		}else {
			count++;
		}
		i++;
	}
	for(int j = 0 ; j < kq.size(); j++){
		cout << chude[j] << " " << kq[j] << endl;
	}
}