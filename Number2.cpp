#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	double a =4.8;
	double b = -7.9;
	float k;
	float n;
	setlocale(LC_ALL, "rus");
	cout << "¬ведите n\n";
	cin >> k;

	if (k<b){
	
	cout << "m = "<< ((k+a)/(-b))+sqrt(pow(sin(a),2)-cos(k))<<endl;
}
if (k==b){
	
	cout <<  "m = "<< pow(b,2)+tan(k*a)<<endl;
}
	 if (k>b){
	
	cout << "m = "<< pow(b,3)+n*(pow(a,2))<<endl;
	}
	
	if (k>=b){
	cout <<"n = " <<pow((a-b),1/3);
	}
	 if (k<b)
	{
	cout<<"n = " <<	a*a+(a-b)/(sin(a*b));
	}
	system("pause");
	return 0;
}
