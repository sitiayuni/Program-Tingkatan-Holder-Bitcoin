#include <iostream>
using namespace std;

int main (){
	/* NAMA : SITI AYUNI
	   KELAS : ILKOMP 21
	   NPM  : 2117051068
	   */
	
	double jumlah_BTC;
	
	// INPUT
	cout << " Mari Lihat Tingkatan Holder Bitcoinmu disini !!! ";
	cout << endl << endl;
	cin >> jumlah_BTC;
	
	cout << endl << endl;
	
	// OUTPUT
	system ( " color 9");
	
	cout << " Sekarang Kamu Berada di tingkat -->";
	if ( jumlah_BTC < 1 ){
		cout << " Shirmp" << endl;
	} else if ( jumlah_BTC >= 1 && jumlah_BTC < 10){
		cout << " Crab " << endl;
	} else if (jumlah_BTC >= 10 && jumlah_BTC < 50){
		cout << " Octopus " << endl;
	} else if (jumlah_BTC >= 50 && jumlah_BTC < 100){
		cout << " Fish " << endl;
	} else if (jumlah_BTC >= 100 && jumlah_BTC < 500){
		cout << " Dolphin" << endl;
	} else if (jumlah_BTC >= 500 && jumlah_BTC < 1000){
		cout << " Shark" << endl;
	} else if (jumlah_BTC >= 1000 && jumlah_BTC < 5000){
		cout << " Whale " << endl;
	} else {
		cout << " Humpback" << endl;
	}
	
	return 0;
}
