#include<iostream>
using namespace std;
int giaithua(int n){
	if(n == 1){
		return 1;
	}
	else{
		return n*giaithua(n-1);
	}
}
int main(){
	int n;
	cout << "Nhap so n: ";
	cin >> n;
	if(n <= 0){
		cout << "NaN" << endl;
	}
	else{
		cout << "n giai thua la: " << giaithua(n) << endl;
	}
	return 0;
}

