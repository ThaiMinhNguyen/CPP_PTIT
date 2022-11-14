#include<bits/stdc++.h>

using namespace std;

struct ThiSinh{
	string ten;
	string ngaysinh;
	double diem1, diem2, diem3;
	double diemtong;
};

void nhap(ThiSinh &s){
	getline(cin , s.ten);
	cin >> s.ngaysinh;
	cin >> s.diem1 >> s.diem2 >> s.diem3;
}

double tongDiem(ThiSinh s){
	double res = (s.diem1 + s.diem2 + s.diem3);
	return res;
}

void in(ThiSinh s){
	cout << s.ten << " " << s.ngaysinh  << " " << setprecision(1) << fixed << tongDiem(s);
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}