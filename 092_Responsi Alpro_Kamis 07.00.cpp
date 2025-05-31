#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class shopee(int login){
	string nama,alamat;
	long int nim;
	long int saldo;
	string barang,struk;
	float ongkir;
	float diskon;
	string proteksi,ekspedisi;
}
	

void login(){
	long int saldo = 0;
	
	cout << "\n ==== SELAMAT DATANG DI APLIKASI KAMI ====" << endl;
	cout << "Masukkan Username: " << endl;
	cin >> nama;
	cout << "Masukkan Password: " << endl;
	getline (cin, nim);
	cout << "\n =========================================" << endl;
	
	if (barang <=0){
		cout << "Harus memasukkan jumlah barang yang lebih dari 0" << endl;
	}else{
		cout << "Masukkan jumlah barang: " << endl;
		cin >> barang;
	}
	
	cout << "\n=---- DAFTAR EKSPEDISI ====" << endl;
	for(int i=0; i<=ekspedisi; i++){
		cout << "Masukkan Nama Ekspedisi: ";
		cin >> ekspedisi;	
	}
	
	cout << "Masukkan Alamat: " << endl;
	getline(cin, alamat);
	
	diskon = barang-harga;
	
	if (diskon == 0){
		cout << "Jumlahnya harus lebih dari 0" << endl;
	}else{
		cout << "Masukkan jumlah diskon: ";
		cin >> diskon;
	}
	
	if (proteksi != ongkir ){
		cout << "Not Found" << endl;
	}else{
		proteksi = ongkir + barang;
		cout << "Jumlah proteksi yang didapat" << proteksi << endl;
	}
	
int main(){
	cout << "\n===== STRUK PEMBELANJAAN ====" << endl;
	cout << "Username: " << nama << endl;
	cout << "Password: " << nim << endl;
	cout << "Jumlah Barang: " << barang << endl;
	cout << "Ekspedisi: " << ekspedisi << endl;
	cout << "Alamat: " << alamat << endl;
	cout << "Diskon: " << diskom << endl;
	cout << "Jumlah Barang: " << barang << endl;
	cout << "Proteksi: " << proteksi << endl;
	cout << "\n===============================" << endl;
	
	return 0;
}	
	
	
