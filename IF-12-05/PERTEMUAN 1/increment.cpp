#include <iostream>

using namespace std;

int main(){
    int r = 20;
    int s;

    s = 20 + ++r; //r = 20 --> r++ = 20 + 1 == > s + 21 = 41
    cout << "Nilai r saat ini " <<r <<endl;
    cout << "Nilai s saat ini " <<s <<endl;
    return 0;
}