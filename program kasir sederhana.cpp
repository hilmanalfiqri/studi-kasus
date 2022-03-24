#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	
	int jum_pesanan, bayar,diskon,jumlah[50], harga[50], sub_tot[50];
	string nama_pesanan[50];
	float tot;
	
	cout<<"PROGRAM C++ KEDAI AYAM"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
	cout<<"Masukan Jumlah Beli : ";
	cin>>jum_pesanan; 
	
	for (int i=0; i<jum_pesanan;i++){
		cout<<endl;
		cout<<"Masukan Barang Ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"Nama Pesanan	: ";
		cin>>nama_pesanan[i]; 
		
		cout<<"Jumlah          : ";
		cin>>jumlah[i]; 
		
		cout<<"Harga           : ";
		cin>>harga[i]; 
		
		sub_tot[i]=jumlah[i]*harga[i]; 
		tot+=sub_tot[i]; 
	}
	
	cout<<endl;
	cout<<"STRUK BELANJA KEDAI AYAM"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"No   Barang    Jumlah     Harga     Sub Total"<<endl;
	for (int i=0;i<jum_pesanan;i++){
		cout<<i+1<<setw(8)<<nama_pesanan[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_tot[i]<<endl; 
	}
	cout<<"---------------------------------------------------------"<<endl;

	
	if (tot>=45000){
		diskon=0.10*tot;
	}else {
		diskon=0;
	}
	
	
	cout<<"Jumlah Pesanan : Rp."<<tot<<endl;
	cout<<"Diskon         : Rp."<<diskon<<endl; 
	cout<<"Total Bayar    : Rp."<<tot-diskon<<endl;
	cout<<"Bayar          : Rp.";
	cin>>bayar; 
	cout<<"Kembali        : Rp."<<(bayar-(tot-diskon))<<endl; 	
}
