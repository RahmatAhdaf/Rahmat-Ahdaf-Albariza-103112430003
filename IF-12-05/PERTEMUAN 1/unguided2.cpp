#include <iostream>

using namespace std;

int main() {
    int angka;

    // daftar kata untuk angka satuan (0 - 9)
    string satuan[] = {"nol","satu","dua","tiga","empat","lima","enam","tujuh","delapan","sembilan"};

    // daftar kata untuk angka belasan (10 - 19)
    string belasan[] = {"sepuluh","sebelas","dua belas","tiga belas","empat belas","lima belas",
                        "enam belas","tujuh belas","delapan belas","sembilan belas"};

    // daftar kata untuk angka puluhan (20, 30, 40, dst)
    string puluhan[] = {"","sepuluh","dua puluh","tiga puluh","empat puluh",
                        "lima puluh","enam puluh","tujuh puluh","delapan puluh","sembilan puluh"};

    // minta input angka dari user
    cout << "Masukkan angka (0 - 100): ";
    cin >> angka;

    // tampilkan angka yang dimasukin
    cout << angka << " : ";

    // cek kondisi angka
    if(angka < 10){
        // kalau 0 - 9 langsung ambil dari array satuan
        cout << satuan[angka];
    } else if(angka < 20){
        // kalau 10 - 19 ambil dari array belasan
        cout << belasan[angka-10];
    } else if(angka < 100){
        // kalau 20 - 99, ambil puluhannya
        cout << puluhan[angka/10] << " ";
        // kalau ada sisa satuan, tambahin
        if(angka % 10 != 0){
            cout << satuan[angka%10];
        }
    } else if(angka == 100){
        // khusus angka 100 langsung ditulis "seratus"
        cout << "seratus";
    } else {
        // kalau lebih dari 100 ditolak
        cout << "Angka di luar jangkauan";
    }

    cout << endl;
    return 0;
}
