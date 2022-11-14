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

class SinhVien{
	private:
		string msv;
		string ten;
		string lop;
		string ngaysinh;
		float diem;
	public:
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
			in.ignore();
			getline(in, a.ten);
			in >> a.lop >> a.ngaysinh >> a.diem;
			a.ngaysinh = chuanhoa(a.ngaysinh);
			return in;
		}
};


int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}