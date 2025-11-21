// Soal nomor 1
// Rahmat Ahdaf Albariza - 103112430003 - IF-12-05

#ifndef SLL_H
#define SLL_H
#include <string> // Menyertakan library string
using namespace std;

// Definisi struktur Node dan SLL
struct Node{
    string namaMahasiswa;
    Node* next;
};

struct SLL {
    Node* head;
};

void createList(SLL &L); // Inisialisasi List
bool isEmpty(SLL L); // Cek apakah List kosong

void insertFirst(SLL &L, string x); // Menambahkan node di awal
void insertLast(SLL &L, string x); // Menambahkan node di akhir
void insertAfter(Node* prevNode, string x);// Menambahkan node setelah prevNode

void deleteFirst(SLL &L); // Menghapus node pertama
void deleteLast(SLL &L); // Mengahapus node terakhir
void deleteAfter(Node* prevNode); // Menghapus node setelah prevNode

void viewList(SLL L); // Menampilkan isi List
int countEven(SLL L); // Menghitung jumlah nama dengan huruf genap

#endif