#include<bits/stdc++.h>
using namespace std;

int x = 0;
int y = 0;
int z = 0;

class KhachHang;
class MatHang;
class HoaDon;

map<string, KhachHang> KH;
map<string, MatHang> MH;

class KhachHang{
	public:
		string mkh;
		string ten;
		string gioitinh;
		string ngaysinh;
		string diachi;
		friend class HoaDon;
	public:
		friend istream &operator >> (istream &in, KhachHang &a){
			x++;
			if(x < 10){
				a.mkh = "KH00" + to_string(x);
//			} else if(x < 100){
//				a.mkh = "KH0" + to_string(x);
			} else {
				a.mkh = "KH0" + to_string(x);
			}
			scanf("\n");
			getline(in, a.ten);
			getline(in, a.gioitinh);
			getline(in, a.ngaysinh);
			getline(in, a.diachi);
			KH[a.mkh] = a;
			return in;
		}
};

class MatHang{
	public:
		string mmh;
		string ten;
		string donvi;
		long long giamua;
		long long giaban;
		friend class HoaDon;
	public:
		friend istream &operator >> (istream &in, MatHang &a){
			y++;
			if(y < 10){
				a.mmh = "MH00" + to_string(y);
//			} else if(y < 100){
//				a.mmh = "MH0" + to_string(y);
			} else {
				a.mmh = "MH0" + to_string(y);
			}
//			in.ignore();
			scanf("\n");
			getline(in, a.ten);
			getline(in, a.donvi);
			in >> a.giamua >> a.giaban;
			MH[a.mmh] = a;
			return in;
		}
};

class HoaDon{
	public:
		string mhd;
		string mkh;
		string mmh;
		long long soluong;
		long long loinhuan;
	public:
		friend istream &operator >> (istream &in, HoaDon &a){
			z++;
			if(z < 10){
				a.mhd = "HD00" + to_string(z);
			} else if(z < 100){
				a.mhd = "HD0" + to_string(z);
			} else {
				a.mhd = "HD0" + to_string(z);
			}
			in >> a.mkh >> a.mmh >> a.soluong;
			a.loinhuan = a.soluong*(MH[a.mmh].giaban-MH[a.mmh].giamua);
			return in;
		}
		friend ostream &operator << (ostream &out, HoaDon &a){
			out << a.mhd << " " << KH[a.mkh].ten << " " << KH[a.mkh].diachi << " " << MH[a.mmh].ten << " " << a.soluong << " " << a.soluong*MH[a.mmh].giaban << " " << a.loinhuan << endl;
			return out; 
		}
};

//bool cmp(HoaDon a, HoaDon b){
//	return a.loinhuan >= b.loinhuan;
//}

bool cmp(HoaDon a, HoaDon b){
	if(a.loinhuan != b.loinhuan) return a.loinhuan > b.loinhuan;
	else return a.mhd < b.mhd;
}

void sapxep(HoaDon a[], int n){
	sort(a, a+n, cmp);
}

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}

//	freopen("DATA.in", "r", stdin);