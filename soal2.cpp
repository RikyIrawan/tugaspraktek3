#include <iostream>
using namespace std;

int main(){
	int tinggi;
	int lebar;
	int alas;
	char huruf;
	
	cout << "luas apa yang ingin anda hitung inputkan 'p' untuk persegi dan 's' untuk segitiga"; cin >> huruf;
	
	if (huruf=='p' || huruf=='P' )
	{
		cout <<"Anda akan menghitung luas persegi \n"
		 <<"masukan tinggi:"; cin >> tinggi;
		cout <<"masukan lebar:"; cin >> lebar;
		cout <<"luas persegi anda:";
		cout <<tinggi*lebar;
		}
		else	if (huruf=='s' || huruf=='S' )
	{
		cout <<"Anda akan menghitung luas segitiga \n"
		 <<"masukan tinggi:"; cin >> tinggi;
		cout <<"masukan alas:"; cin >> alas;
		cout <<"luas segitiga anda:";
		cout <<0.5*alas*tinggi;
		}
		else
		cout <<"huruf yang anda input tidak tersedia";
		
	
	
}
