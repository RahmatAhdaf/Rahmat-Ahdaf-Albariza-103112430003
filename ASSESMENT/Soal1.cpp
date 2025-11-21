// Soal nomor 1
// Rahmat Ahdaf Albariza - 103112430003 - IF-12-05

#include "Soal1.h"
#include <iostream>
using namespace std;

// Inisialisasi List
void createList(SLL &L){
    L.head = nullptr;
}

// Cek apakah List kosong
bool isEmpty(SLL L){
    return L.head == nullptr;
}

// Menambahkan node di awal
void insertFirst(SLL &L, string x){
    Node* n = new Node{x, L.head};
    L.head = n;
}

// Menambahkan node di akhir
void insertLast(SLL &L, string x){
    Node* n = new Node{x, nullptr};
    if(isEmpty(L)){
        L.head = n;
    } else {
        Node* p = L.head;
        while(p->next) p = p->next;
        p->next = n;
    }
}

// Menambahkan node setelah prevNode
void insertAfter(Node* prevNode, string x){
    if(prevNode){
        Node* n = new Node{x, prevNode->next};
        prevNode->next = n;
    }
}

// Menghapus node pertama
void deleteFirst(SLL &L){
    if(!isEmpty(L)){
        Node* p = L.head;
        L.head = p->next;
        delete p;
    }
}

// Mengahapus node terakhir
void deleteLast(SLL &L){
    if(isEmpty(L)) return;
    if(L.head->next == nullptr){
        delete L.head;
        L.head = nullptr;
        return;
    }
    Node* p = L.head;
    Node* prev = nullptr;
    while (p->next){ prev = p; p = p->next; }
    prev->next = nullptr;
    delete p;
}

// Menghapus node setelah prevNode
void deleteAfter(Node* prevNode){
    if(prevNode && prevNode->next){
        Node* p = prevNode->next;
        prevNode->next = p->next;
        delete p;
    }
}

// Menampilkan isi List
void viewList(SLL L){
    Node* p = L.head;
    while(p){ cout << p->namaMahasiswa << " "; p = p->next; }
    cout << " " << endl;
}


// Menghitung jumlah nama dengan huruf genap
int countEven(SLL L){
    int c = 0;
    Node* p = L.head;
    while(p){ if(p->namaMahasiswa.length() % 2 == 0) c++; p = p->next; }
    return c;
}
