#include <iostream>

using namespace std;

int main() {
    float angka1, angka2;
    
    // input
    cout << "Masukkan angka pertama : ";
    cin >> angka1;
    cout << "Masukkan angka kedua   : ";
    cin >> angka2;
    
    // proses dan output
    cout << "Hasil Penjumlahan = " << angka1 + angka2 << endl;
    cout << "Hasil Pengurangan = " << angka1 - angka2 << endl;
    cout << "Hasil Perkalian   = " << angka1 * angka2 << endl;
    cout << "Hasil Pembagian   = " << angka1 / angka2 << endl;

    return 0;
}
