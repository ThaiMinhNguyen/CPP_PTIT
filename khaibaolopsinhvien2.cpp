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
		SinhVien(){
			msv = "B20DCCN001";
			ten = "";
			lop = "";
			ngaysinh= "";
			diem = 0;	
		}
		friend ostream &operator << (ostream &out, SinhVien a){
			out << a.msv << " " << a.ten << " " << a.lop << " " << a.ngaysinh << " " << setprecision(2) << fixed << a.diem;
			return out;
		}
		friend istream &operator >> (istream &in, SinhVien &a){
			getline(in, a.ten);
			in >> a.lop >> a.ngaysinh >> a.diem;
			a.ngaysinh = chuanhoa(a.ngaysinh);
			return in;
		}
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}