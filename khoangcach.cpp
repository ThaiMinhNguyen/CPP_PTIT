#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n;i++){
		double x1, x2, y1, y2;
		cin >> x1 >> x2 >> y1 >> y2;
		double d = sqrt(pow((x1-y1), 2) + pow((x2-y2), 2));
		cout << setprecision(4) << fixed << d << endl;
	}
	return 0;
}