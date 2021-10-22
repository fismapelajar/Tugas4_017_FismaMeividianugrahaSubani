#include<iostream>
#include<conio.h>

using namespace std;

main(){
	
	int banyakb, n, harga=0, tharga, i=1, ulang;
	
	cout<<"=================================="<<endl;
	cout<<"PROGRAM MENGHITUNG BIAYA BELANJA"<<endl;
	cout<<"=================================="<<endl<<endl;
	
	cout<<"Isi Data Barang Belanja Kamu"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"Banyak Barang="; cin>>banyakb;
	while(i<=banyakb){
		cout<<"Harga Barang ke "<<i<<" ="; cin>>n;
		harga=harga+n;
		i++;
	}
	cout<<"----------------------------------------"<<endl<<endl;
	
	if (harga>=500000){
		tharga=harga-(harga*0.1);
	}
	else if(harga>200000 && banyakb<=500000){
		tharga=harga-(harga*0.5);
	}
	else if(harga<=200000){
		tharga=harga;	
	}
	
	cout<<"\n------------------------------------------"<<endl;
	cout<<"Harga Asli="<<harga<<endl;
	cout<<"Harga Setelah Di Diskon="<<tharga<<endl;
	
	return 0;
}
