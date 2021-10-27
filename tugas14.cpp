#include <iostream>

using namespace std;

int main(){
	struct rumah{
		string tipe_rumah;
		int jumlah_kamar;	
	};
	
	rumah rumah1;
	cout<<"tipe rumah : "<<&rumah1.tipe_rumah<<endl;
	cout<<"jumlah kamar : "<<&rumah1.jumlah_kamar;
}
