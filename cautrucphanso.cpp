#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
	long long tu, mau;
};

void nhap(PhanSo &s){
	cin >> s.tu >> s.mau;
}

void rutgon(PhanSo &s){
	long long a = __gcd(s.tu, s.mau);
	s.tu = s.tu/a;
	s.mau = s.mau/a;
}

void in(PhanSo s){
	cout << s.tu << "/" <<s.mau;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}