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

class SinhVien{
	private:
		string msv;
		string ten;
		string lop;
		string ngaysinh;
		float diem;
	public:
		void nhap(){
			msv = "B20DCCN001";
			getline(cin, ten);
			cin >> lop >> ngaysinh >> diem;
		}
		void xuat(){
			ngaysinh = chuanhoa(ngaysinh);
			cout << msv << " " << ten << " " << lop << " " << ngaysinh << " " << setprecision(2) << fixed << diem;
		}
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}