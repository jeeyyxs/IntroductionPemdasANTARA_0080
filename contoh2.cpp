#include <iostream>
using namespace std;

int main() 
{//mulai
    //Numeric nPanjang, nLebar, nKeliling
    int Panjang, Lebar, Keliling;

    //Display "Masukkan Panjang :
    cout << "Masukkan Panjang : ";
    //Accept nPanjang
    cin >> Panjang;
    //Display "Masukkan Lebar : ";
    cout << "Masukkan Lebar : ";
    //Accept nLebar
    cin >> Lebar;

    //Compute Keliling
    Keliling = 2 * (Panjang + Lebar);

    //Display Keliling
    cout << "Keliling persegi panjang adalah : " << Keliling << endl;
    return 0;
    
}//selesai