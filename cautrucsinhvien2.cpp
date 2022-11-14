#include<bits/stdc++.h>

using namespace std;

string chuanhoa(string s){
	string res;
	string m;
	for(int i = 0; i < s.size(); i++){
		if(s[i] != '/'){
			m += s[i];
		}
		if(s[i] == '/' ){
			if(m.size() == 1){
				m = "0" + m;
			}
			res = res + m + "/";
			m = "";
		}
		if(i == s.size()-1){
			res = res + m;
		}
	}
	return res;
}

struct SinhVien{
	string masv;
	string ten;
	string lop;
	string ngaysinh;
	float diem;
};

void nhapThongTinSV(SinhVien &s){
	s.masv = "N20DCCN001";
	getline(cin , s.ten);
	cin >> s.lop >> s.ngaysinh >> s.diem;
}

void inThongTinSV(SinhVien s){
	cout << s.masv << "\t" << s.ten << "\t" << s.lop << "\t" << chuanhoa(s.ngaysinh) << "\t";
	cout << setprecision(2) << fixed << s.diem;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}