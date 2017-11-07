#include <iostream>
using namespace std;

int main(){
	int jk;
	int gpj;
	int l;
	int jl;
	int jkt;
	int gt;
	int gb;
	
	cout <<"Masukan jam kerja anda:"; cin >> jk;
	cout <<"masukan gaji anda per jam:"; cin >> gpj;
	l=jk-40;
	jl=l*1.5;
	jkt=40+jl;
	gt=jkt*gpj;
	gb=gt-(0.15*gt);
	cout <<"jam lembur anda:"<<l;
	cout <<"bonus dari lembur anda:"<<jl;
	cout <<"jam kerja total anda:"<<jkt;
	cout <<"gaji total anda:"<<gt;
	cout <<"gaji bersih anda di potong pajak:"<<gb;
	
}
