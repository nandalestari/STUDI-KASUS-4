#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

class Tabungan{
	public:
		void cetak();
		int akumulasi(int a, int pendapatan);
};

int Tabungan::akumulasi(int a, int pendapatan){
	int n;
	int x;
	int hasil;
	if(a > 0, a <= 10){ 
		cout <<"\t\t";
		cin >> n;
		cout << "\t\t\t\t";
		cin >>x;
		hasil = pendapatan-x+n;
		cout << "| " << a << "\t   |" << "\t\t" << "  |\t" << "\t  |\t" << hasil << "\t\t|" << endl;
		cout << "___________________________________________________________________\n";
		return akumulasi(a+1, pendapatan-x+n);
	}
}
