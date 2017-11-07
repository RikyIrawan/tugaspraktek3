#include <iostream>

using namespace std;

int main() {

    float bbadan;
    int tbadan;	

cout << "Silahkan masukkan tinggi badan(cm) : "; 
cin >>tbadan;
cout << "Silahkan masukkan berat badan(kg) : " ;
cin >> bbadan;

if (bbadan<tbadan/2.5)
cout << "  Underweight" << endl;
else if (tbadan/2.3 < bbadan)
cout << "  Overweight" << endl;
else if (tbadan/2.5 <= bbadan <= tbadan/2.3)
cout << "  Normal" << endl;
   
}
