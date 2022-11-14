#include<bits/stdc++.h>

using namespace std;

struct Thuphi{
	string bienso;
	string loaixe;
	string soghe;
	string trangthai;
	string ngay;
	long long dongia;
};

int main(){
	int t;
	cin >> t;
	Thuphi res[t];
	map<string,long long> tien;
	vector<string> ngaytheothutu;
	cin.ignore();
	for(int i = 0; i < t; i++){
		string s;
		getline(cin , s);
		vector<string> st;
		stringstream is(s);
		while(is >> s){
			st.push_back(s);
		}
		res[i].bienso = st[0];
		res[i].loaixe = st[1];
		res[i].soghe = st[2];
		res[i].trangthai = st[3];
		res[i].ngay = st[4];
		if(res[i].loaixe == "Xe_con" && res[i].soghe == "5"){
			res[i].dongia = 10000;
		}
		else if(res[i].loaixe == "Xe_con" && res[i].soghe == "7"){
			res[i].dongia = 15000;
		}
		else if(res[i].loaixe == "Xe_khach" && res[i].soghe == "29"){
			res[i].dongia = 50000;
		}
		else if(res[i].loaixe == "Xe_khach" && res[i].soghe == "45"){
			res[i].dongia = 70000;
		} else {
			res[i].dongia = 20000;
		}
		tien[st[4]] = 0;
	}
	ngaytheothutu.push_back(res[0].ngay);
	for(int i = 0; i < t; i++){
		if(res[i].trangthai == "IN"){
			tien[res[i].ngay] += res[i].dongia;
		}
		int check = 1;
		for(int j = 0 ; j < ngaytheothutu.size(); j++){
			if(res[i].ngay == ngaytheothutu[j]){
				check = 0;
				break;
			}
		}
		if(check == 1){
			ngaytheothutu.push_back(res[i].ngay);
		}
	}
	for(int j = 0 ; j < ngaytheothutu.size(); j++){
		cout << ngaytheothutu[j] << ": " << tien[ngaytheothutu[j]] << endl;
	}
//	for(auto x:tien){
//		cout << x.first << ": " << x.second << endl;
//	}
	
}