#include<bits/stdc++.h>

using namespace std;

class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(){
			
		}
		PhanSo(long long tu, long long mau){
			this->tu = tu;
			this->mau = mau;
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
//		friend PhanSo &operator + (PhanSo &b){
//			PhanSo c;
//			long long s = __gcd(mau, b.mau);
//			c.mau = (mau/s)*b.mau;
//			c.tu = tu*(b.mau/s)+b.tu*(mau/s);
//			c.rutgon();
//			return c;
//		} 
		friend PhanSo operator + (PhanSo a, PhanSo b){
			PhanSo c;
			c.mau = a.mau*b.mau;
			c.tu = a.tu*b.mau + b.tu*a.mau;
			c.rutgon();
			return c;
		} 
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}