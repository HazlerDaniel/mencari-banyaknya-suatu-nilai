#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int kumpulandata[10] = {3,1,5,8,1,9,3,10,3,15};
	int kemunculandata[10],jumlah,tmp;
	
	//Mengurutkan data secara urutan naik(1,1,3,...)//
	for(int h=0; h<10; h++)
	{
		for(int i=h+1; i<10; i++)
		{
			if(kumpulandata[h] > kumpulandata[i])
			{
				tmp = kumpulandata[i];
				kumpulandata[i] = kumpulandata[h];
				kumpulandata[h] = tmp;
			}
		}
		cout << kumpulandata[h]<< " ";
	}
	cout << "\nBanyak kemunculan suatu nilai : "<<endl;
	
	//proses menghitung periode kemunculan//
	for(int h=0; h<10; h++)
	{
		jumlah =0;
		for(int i=0; i<10; i++)
		{
			if(kumpulandata[h] == kumpulandata[i])
			jumlah++;
		}
		
		/*Menghindari program menampilkan angka yang sudah di tampilkan ke layar sebelumnya */
		if(kumpulandata[h] != kumpulandata[h-1])
		cout << kumpulandata[h] << " : "<< jumlah <<endl;
		
	}
	getch();
}
