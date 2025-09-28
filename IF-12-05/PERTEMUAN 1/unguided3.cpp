#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Input: ";
    cin >> n;

    cout << "Output:" << endl;

    for (int i = n; i >= 0; i--) {
        // kasih spasi biar rata kanan
        for (int spasi = 0; spasi < n - i; spasi++) {
            cout << "  "; // 2 spasi biar rapi
        }

        // cetak angka menurun
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        // cetak tanda *
        cout << "* ";

        // cetak angka menaik
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
