#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

struct Point{
	double a, b;
};

void nhap(Point &x){
	cin >> x.a >> x.b;
}

double canh(Point X, Point Y){
	return sqrt((X.a-Y.a)*(X.a-Y.a)+(X.b-Y.b)*(X.b-Y.b));
}

bool check(Point X, Point Y, Point Z){
	double xy = canh(X, Y);
	double xz = canh(X, Z);
	double yz = canh(Y, Z);
	if((xy+xz)>yz&&(xy+yz)>xz&&(xz+yz)>xy) return 1;
	return 0;
}

double dientich(Point X, Point Y, Point Z){
	double xy = canh(X, Y);
	double xz = canh(X, Z);
	double yz = canh(Y, Z);
	double s = sqrt((xy + xz + yz)*(xy + xz - yz)*(xz + yz - xy)*(xy - xz + yz))/4;
	double r = (xy*xz*yz)/(4*s);
	return r*r*PI;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		Point X, Y ,Z;
		nhap(X);
		nhap(Y);
		nhap(Z);
		if(check(X, Y, Z) == 0){
			cout << "INVALID" << endl;
		} else {
			cout << setprecision(3) << fixed << dientich(X, Y, Z) << endl;
		}
	}
}




