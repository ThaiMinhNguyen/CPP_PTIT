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
		if(dem(s) == 0){
			res.push_back("\n");
		} else {
			res.push_back(s);	
		}
	}
	chude.push_back(res[0]);
	mp[res[0]] = 0;
	int i = 1;
	while(res[i]!= "\n"){
		count++;
		i++;
	}
//	kq.push_back(mp[res[0]]);
	while(i < t){
		if(res[i] == "\n"){
			kq.push_back(count);
			count = -1;
			chude.push_back(res[i+1]);
		}else {
			count++;
		}
		i++;
	}
	kq.push_back(count);
	for(int j = 0 ; j < kq.size(); j++){
		cout << chude[j] << ": " << kq[j] << endl;
	}
}