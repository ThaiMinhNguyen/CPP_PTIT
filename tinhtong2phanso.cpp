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

//PhanSo tong(PhanSo p, PhanSo q){
//	PhanSo r;
//	rutgon(p);
//	rutgon(q);
//	long long a = __gcd(p.mau, q.mau);
//	long long s = (p.mau*q.mau)/a;
//	r.mau = s;
//	r.tu = p.tu*s/p.mau + q.tu*s/q.mau;
//	rutgon(r);
//	return r;
//}

PhanSo tong(PhanSo p, PhanSo q){
	PhanSo r;
//	long long a = __gcd(p.mau, q.mau);
//	long long s = (p.mau*q.mau)/a;
	r.mau = p.mau*q.mau;
	r.tu = p.tu*q.mau + q.tu*p.mau;
	rutgon(r);
	return r;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}