#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
	long long tu;
	long long mau;
};

void rutgon(PhanSo &a){
	long long s = __gcd(a.mau, a.tu);
	a.mau/=s;
	a.tu/=s;
}

void nhap(PhanSo &a){
	cin >> a.tu >> a.mau;
}

PhanSo tong(PhanSo p, PhanSo q){
	PhanSo r;
	r.mau = p.mau*q.mau;
	r.tu = p.tu*q.mau + q.tu*p.mau;
	rutgon(r);
	return r;
}

PhanSo tongmu(PhanSo a, PhanSo b){
	PhanSo c = tong(a, b);
	c.mau= c.mau*c.mau;
	c.tu = c.tu*c.tu;
	return c;
}

PhanSo nhan(PhanSo a, PhanSo b, PhanSo c){
	PhanSo d;
	d.tu = a.tu*b.tu;
	d.mau = a.mau*b.mau;
	rutgon(d);
	d.tu*= c.tu;
	d.mau*=c.mau;
	rutgon(d);
	return d;
}

void in(PhanSo a){
	cout << a.tu << "/" << a.mau;
}

void process(PhanSo a, PhanSo b){
	PhanSo c = tongmu(a, b);
	PhanSo d = nhan(a, b ,c);
	in(c);
	cout << " ";
	in(d);
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}

