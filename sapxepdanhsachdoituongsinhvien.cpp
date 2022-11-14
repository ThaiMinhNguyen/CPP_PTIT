#include<bits/stdc++.h>

using namespace std;

int x = 0;

class NhanVien{
	public:
		int mnv;
		string ten, gioitinh, ngaysinh, diachi, mst, ngayki;
		string y, m, d;
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
			stringstream is(a.ngaysinh);
			getline(is, a.m, '/');
			getline(is, a.d, '/');
			getline(is, a.y, '/');
			in.ignore();
			getline(in, a.diachi);
			in >> a.mst >> a.ngayki;
			return in;
		}
		string gety(){
			return y;
		}
		string getm(){
			return m;
		}
		string getd(){
			return d;
		}
};

bool cmp(NhanVien a, NhanVien b){
	if(a.y>b.y) return 0;
	if(a.y<b.y) return 1;
	if(a.m>b.m) return 0;
	if(a.m<b.m) return 1;
	if(a.d>b.d) return 0;
	return 1;
}

void sapxep(NhanVien a[], int n){
	sort(a, a+n, cmp);
}

int main(){	
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}