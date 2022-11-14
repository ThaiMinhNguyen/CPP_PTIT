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

void nhap(SinhVien &s){
	s.masv = "B20DCCN001";
	getline(cin , s.ten);
	cin >> s.lop >> s.ngaysinh >> s.diem;
}

void in(SinhVien s){
	cout << s.masv << " " << s.ten << " " << s.lop << " " << chuanhoa(s.ngaysinh) << " ";
	cout << setprecision(2) << fixed << s.diem;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}