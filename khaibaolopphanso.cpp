#include<bits/stdc++.h>

using namespace std;

class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(long long, long long){
			this->tu;
			this->mau;
		}
		friend ostream &operator << (ostream &out, PhanSo a){
			out << a.tu << '/' << a.mau;
			return out;
		}
		friend istream &operator >> (istream &in, PhanSo &a){
			in >> a.tu >> a.mau;
			return in;
		}
		void rutgon(){
			long long s = __gcd(tu, mau);
			tu/=s;
			mau/=s;
		}
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}