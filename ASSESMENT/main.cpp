// Soal nomor 1
// Rahmat Ahdaf Albariza - 103112430003 - IF-12-05

#include <iostream>
#include <string>
#include "Soal1.h"
using namespace std;

int main() {
    SLL L;
    createList(L);

    int menu = -1;
    string namaMahasiswa;

    // program menu
    while (menu != 0) {
        cout << "Menu: 1 insert, 2 delete, 3 view, 4 hitung genap, 0 exit\n";
        cin >> menu;
        cin.ignore();

        // insert menu
        if (menu == 1) {
            cout << "Masukkan nama: ";
            getline(cin, namaMahasiswa); // untuk membaca string dengan spasi
            insertLast(L, namaMahasiswa);
        }

        // delete menu
        else if (menu == 2) {
            cout << "Masukkan nama untuk delete: ";
            getline(cin, namaMahasiswa); // untuk membaca string dengan spasi

            // delete by searching first occurrence
            Node* p = L.head;
            Node* prev = nullptr;

            while (p && p->namaMahasiswa != namaMahasiswa) { // mencari nama
                prev = p;
                p = p->next;
            }

            if (!p) {
                cout << "Nama tidak ditemukan.\n";
            } else {
                if (prev == nullptr) deleteFirst(L); // menghapus node pertama
                else if (p->next == nullptr) deleteLast(L); // menghapus node terakhir
                else deleteAfter(prev);
            }
        }

        // view menu
        else if (menu == 3) {
            viewList(L); // menampilkan list
        }

        // hitung genap menu
        else if (menu == 4) {
            cout << "Jumlah nama dengan huruf genap: " << countEven(L) << "\n"; // hitung nama dengan huruf genap
        }
    }

    return 0;
}
