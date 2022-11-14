#include<bits/stdc++.h>

using namespace std;

class NhanVien{
	private:
		string mnv;
		string ten;
		string gioitinh;
		string ngaysinh;
		string diachi;
		string mst;
		string ngayki;
	public:
		friend ostream &operator << (ostream &out, NhanVien a){
			out << a.mnv << " " << a.ten << " " << a.gioitinh << " " << a.ngaysinh << " " << a.diachi << " " << a.mst << " " << a.ngayki;
			return out;
		}
		friend istream &operator >> (istream &in, NhanVien &a){
			a.mnv = "00001";
			getline(in, a.ten);
			getline(in, a.gioitinh);
			getline(in, a.ngaysinh);
			getline(in, a.diachi);
			getline(in, a.mst);
			getline(in, a.ngayki);
			return in;
		}
		void nhap(){
			mnv = "00001";
			getline(cin, ten);
			getline(cin, gioitinh);
			getline(cin, ngaysinh);
			getline(cin, diachi);
			getline(cin, mst);
			getline(cin, ngayki);
		}
		void xuat(){
			cout << mnv << " " << ten << " " << gioitinh << " " << ngaysinh << " " << diachi << " " << mst << " " << ngayki;
		}
};


int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}