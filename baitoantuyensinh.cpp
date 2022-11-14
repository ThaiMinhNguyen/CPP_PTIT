#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string msv;
	string ten;
	float dut;
	float toan;
	float ly;
	float hoa;
};

int main(){
	SinhVien a;
	cin >> a.msv;
	cin.ignore();
	getline(cin , a.ten);
	cin >> a.toan >> a.ly >> a.hoa;
	if(a.msv[2] == '1'){
		a.dut = 0.5;
	} else if(a.msv[2] == '2'){
		a.dut = 1;
	} else {
		a.dut = 2.5;
	}
	string kq;
	float tong = a.toan*2 + a.ly + a.hoa;
	float diemxet = tong + a.dut;
	if(diemxet >= 24){
		kq = "TRUNG TUYEN";
	} else {
		kq = "TRUOT";
	}
	cout << a.msv << " " << a.ten << " " << a.dut << " " << tong << " " << kq;
}