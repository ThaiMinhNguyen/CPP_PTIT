#include<bits/stdc++.h>

using namespace std;

//struct giaovien{
//	string cv;
//	int heso;
//	string ten;
//	long long luong;
//	long long trocap;
//};

int doiheso(string s){
	int res = 0;
	for(int i = 0 ; i < s.size(); i++){
		res = res*10 + (s[i] - '0');
	}
	return res;
}

int main(){
	string s;
	cin >> s;
	cin.ignore();
	string cv;
	cv = cv + s[0] + s[1];
	string hs;
	hs = hs + s[2]+s[3];
	//cout << doiheso(hs) << endl;
	int heso = doiheso(hs);
	string ten;
	getline(cin, ten);
	long long trocap;
	cin >> trocap;
	long long luong;
	long long tong;
	if(cv == "HT"){
		luong = 2000000;
	}
	else if(cv == "HP"){
		luong = 900000;
	} else if(cv == "GV"){
		luong = 500000;
	}
	tong = luong + trocap*heso;
	cout << s << " " << ten << " " << heso << " " << luong << " " << tong;
}