#include "stack.h" // mengimpor header file stack.h yang berisi definisi struktur dan konstanta

using namespace std;


void CreateStack(Stack &S){
    S.top = Nil;
}

// FUngsi untuk mengecek apakah stack kosong
bool isEmpty(Stack S){
    return S.top == Nil; // mengembalikan true jika top bernilai Nil, false jika tidak
}

// Fungsi untuk mengecek apakah stack penuh
bool isFull(Stack S){
    return S.top == MaxEl - 1;
}


void push(Stack &S, infotype x){
    if (!isFull(S)){
        S.top++;
        S.info[S.top] = x;
    }else{
        cout << "Stack Penuh!" << endl;
    }
}

// Fungsi untuk mengambil elemen teratas daristack (pop)
infotype pop(Stack &S){
    infotype x = -999;
    if (!isEmpty(S)){
        x = S.info[S.top];
        S.top--;
    } else{
        cout << "Stack Kosong!" << endl;
    }
    return x;
}

// FUngsi untuk menampilkan isi stack
void printInfo(Stack S) {
    if (isEmpty(S)) {
        cout << "Stack Kosong" << endl;
    } else {
        cout << "[TOP]";
        for (int i = S.top; i >= 0; i--) {
            cout << S.info[i] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk membalik urutan elemen dalam stack
void balikStack(Stack &S) {
    if (!isEmpty(S)) { // Cek apakah stack tidak kosong
        Stack temp1, temp2; // Deklarasi dua stack temporary
        CreateStack(temp1); CreateStack(temp2);

        while (!isEmpty(S)) { push(temp1, pop(S)); }

        while (!isEmpty(temp1)) { push(temp2, pop(temp1)); }

        while (!isEmpty(temp2)) { push(S, pop(temp2)); }
    }
}

// Menambahkan elemen secara ascending
void pushAscending(Stack &S, infotype X) {
    if (isFull(S)) {
        cout << "Stack penuh" << endl;
        return;
    }

    Stack temp;
    CreateStack(temp);

    // Pindahkan elemen yang lebih kecil dari X ke stack sementara
    while (!isEmpty(S) && S.info[S.top] < X) {
        push(temp, pop(S));
    }

    // Push X ke stack utama
    push(S, X);

    // Kembalikan elemen dari stack sementara ke stack utama
    while (!isEmpty(temp)) {
        push(S, pop(temp));
    }
}

// Membaca input stream dari user dan masukkan ke stack
void getInputStream(Stack &S) {
    cout << "Masukkan angka: ";
    string input;
    cin >> input; // membaca seluruh string angka tanpa spasi (misal: 4729601)

    for (char c : input) {
        if (isdigit(c)) { // hanya karakter angka yang valid
            int value = c - '0';
            push(S, value);
        }
    }
}