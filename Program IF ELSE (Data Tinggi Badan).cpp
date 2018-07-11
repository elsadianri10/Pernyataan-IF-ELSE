#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char nama[20];
	int jenis_kelamin, tinggi;
	cout<<"Program IF dan ELSE"<<endl<<endl;
	cout<<"Masukkan data anda dengan benar"<<endl<<endl;
	cout<<"Nama	: "; gets (nama);
	cout<<"Tinggi Badan : "; cin>>tinggi;
	
	if (tinggi>=160)
	{
	cout<<"\nTerima Kasih, tinggi badan Anda telah memenuhi syarat"<<endl;
	}
	else
	{
	cout<<"\nMohon Maaf, Tinggi badan Anda belum memenuhi syarat"<<endl;
	}
	
	getch();
}
