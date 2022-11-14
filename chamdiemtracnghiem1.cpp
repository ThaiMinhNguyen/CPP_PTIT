#include<iostream>
#include<iomanip>
//#include<vector>

using namespace std;

int main(){
	char dapande101[] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
	char dapande102[15] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int s;
		cin >> s;
		vector<char> dapan;
		for(int d = 0; d < 15; d++){
			char s;
			cin >> s;
			dapan.push_back(s);
		}
		if(s == 101){
			double diem = 0;
			for(int d = 0; d < 15; d++){
				if(dapan[d] == dapande101[d]){
					diem += 1;
				}
			}
			cout << setprecision(2) << fixed << diem << endl;
		} else {
			double diem = 0;
			for(int d = 0; d <15; d++){
				if(dapan[d] == dapande102[d]){
					diem += (double)10/15;
				}
			}
			cout << setprecision(2) << fixed << diem << endl;
		}
	}
}
