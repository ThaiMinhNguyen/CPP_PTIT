#include<bits/stdc++.h>

using namespace std;

int x = 0;

string chuanhoa(string s){
	string res;
	string m;
	for(int i = 0; i < s.size(); i++){
		if(s[i] != '/'){
			m += s[i];
		}
		if(s[i] == '/' ){
			if(m.size() == 1){
				m = "0" + m;
			}
			res = res + m + "/";
			m = "";
		}
		if(i == s.size()-1){
			res = res + m;
		}
	}
	return res;
}

void to_lower(string &s){
	for(int i = 0; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}
}

void chuanhoa_ten(string &s){
	string res;
	to_lower(s);
	stringstream is(s);
	while(is >> s){
		s[0] = toupper(s[0]);
		if(res == ""){
			res += s;
		} else {
			res = res + " " + s;
		}
	}
	s = res;
}


class SinhVien{
	private:
		string msv;
		string ten;
		string lop;
		string ngaysinh;
		float diem;
	public:
		SinhVien(){
			msv = "";
			ten = "";
			lop = "";
			ngaysinh = "";
			diem = 0;
		}
		friend ostream &operator << (ostream &out, SinhVien a){
			out << a.msv << " " << a.ten << " " << a.lop << " " << a.ngaysinh << " " << setprecision(2) << fixed << a.diem << endl;
			return out;
		}
		friend istream &operator >> (istream &in, SinhVien &a){
			x++;
			if(x<10){
				a.msv = "B20DCCN00" + to_string(x);
			} else {
				a.msv = "B20DCCN0" + to_string(x);
			}
			scanf("\n");
			getline(in, a.ten);
			in >> a.lop >> a.ngaysinh >> a.diem;
			a.ngaysinh = chuanhoa(a.ngaysinh);
			chuanhoa_ten(a.ten);
			return in;
		}
		float getDiem(){
			return diem;
		}
//		bool cmp(SinhVien a, SinhVien b){
//			return a.diem > b.diem;
//		}
};

bool cmp(SinhVien a, SinhVien b){
	return a.getDiem() > b.getDiem();
}

void sapxep(SinhVien a[], int n){
		sort(a, a+n,cmp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

//	freopen("DATA.in", "r" , stdin);