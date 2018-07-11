#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int nilai;
	cout<<"Input Nilai Matakuliah = ";
	cin>>nilai;
	
	if (nilai>= 60){
		cout<<"\n\nSelamat, Anda LULUS\n";
	}
	else {
		cout<<"\n\nMaaf, Anda Tidak Lulus\n";
	}
	cout<<"Terima Kasih Telah menggunakan Program Ini";
	getch();
}
