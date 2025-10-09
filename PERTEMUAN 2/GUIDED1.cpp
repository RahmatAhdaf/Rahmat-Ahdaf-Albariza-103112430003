#include <iostream>

using namespace std;

int main(){
    int bukuPerHari[7] = {2, 1, 3, 2, 4, 5, 1};
    int totalBuku = 0;

    cout << "Laporan Baca Buku Mingguan" << endl;

    // Mengakses setiap elemen array menggunakan loop
    for (int  i = 0; i < 7; i++){
        // Mencetak nilai dari elemen pada indeks ke-i.
        cout << "Hari ke-" << i + 1 << " : " << bukuPerHari[i]
        <<" buku." << endl;
        totalBuku += bukuPerHari[i];
    }
    cout << "Total buku yang dibaca minggu ini : " << totalBuku
    << " buku." << endl;
}