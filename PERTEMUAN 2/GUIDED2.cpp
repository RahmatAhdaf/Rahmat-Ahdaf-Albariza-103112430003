#include <iostream>

using namespace std;

int main(){
    float hargaProduk = 50000.0f;
    // Deklarasi pointer.
    float*ptrHarga;
    ptrHarga = &hargaProduk;

    cout << "Harga awal produk: Rp" << hargaProduk << endl;
    cout << "Alamat memori harga: " << ptrHarga << endl;

    cout << "\n...Memberikan diskon 10% melalui pointer..." << endl;

    *ptrHarga = *ptrHarga * 0.9;
    cout << "Harga setelah diskon: Rp " << hargaProduk << endl;
    return 0;
}