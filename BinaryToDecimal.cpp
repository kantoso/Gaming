#include<iostream>

using namespace std;
int luythua(int n, int mu){
	int i, luythua = 1;
	for(i = 0; i < mu; i++){
		luythua *= n;
		}
	return luythua;
	}
int main(){
	long int in;
	int ketqua = 0,i, heso=0;
	cout << "Nhap so n: ";
	cin >> in;
	while( in != 0){
		i = in % 10;
		if(i == 1){
			ketqua += luythua(2,heso);
			}
		in = in/10;
		heso++;
		}
	cout << "He thap phan la: " << ketqua << endl;
	return 0;
}

