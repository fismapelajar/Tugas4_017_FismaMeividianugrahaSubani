#include<iostream>
using namespace std;

main(){
	menu:
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
	cout<<"-------------------------------------------"<<endl<<endl;
	
	cout<<"Ingin Belanja Lagi? (1.iya / 2.tidak)="; cin>>ulang;
	if(ulang==1){
		system("cls");
		goto menu;
	}
	else if(ulang==2){
		cout<<"\n";
		cout<<"Terima Kasih";
	}
	return 0;
}
