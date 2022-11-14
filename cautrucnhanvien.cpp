#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
	string manv;
	string ten;
	string gioitinh;
	string ngaysinh;
	string diachi;
	string masothue;
	string ngayki;
};

void nhap(NhanVien &a){
	a.manv = "00001";
	getline(cin, a.ten);
	cin >> a.gioitinh;
	cin >> a.ngaysinh;
	cin.ignore();
	getline(cin, a.diachi);
	cin >> a.masothue;
	cin >> a.ngayki;
}

void in(NhanVien a){
	cout << a.manv << " " << a.ten << " " << a.gioitinh << " " << a.ngaysinh << " " << a.diachi << " " << a.masothue << " " << a.ngayki;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}