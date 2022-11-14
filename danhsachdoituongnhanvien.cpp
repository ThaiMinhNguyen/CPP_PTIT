#include<bits/stdc++.h>

using namespace std;

int x = 0;

class NhanVien{
	private:
		int mnv;
		string ten, gioitinh, ngaysinh, diachi, mst, ngayki;
	public:
		friend ostream &operator << (ostream &out, NhanVien a){
			out << setw(5) << setfill('0') << a.mnv << " " << a.ten << " " << a.gioitinh << " " << a.ngaysinh << " " << a.diachi << " " << a.mst << " " << a.ngayki << endl;
			return out;
		}
		friend istream &operator >> (istream &in, NhanVien &a){
			x++;
			a.mnv = x;
			in.ignore();
			getline(in, a.ten);
			in >> a.gioitinh >> a.ngaysinh;
			in.ignore();
			getline(in, a.diachi);
			in >> a.mst >> a.ngayki;
			return in;
		}
		
};

int main(){
	freopen("DATA.in", "r", stdin);
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}