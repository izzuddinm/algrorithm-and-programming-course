#include <iostream>
using namespace std;

int main() {
    int bilangan1, bilangan2;
    string retry;

    do {
        cout << "Masukan Bilangan 1 : ";
        cin >> bilangan1;

        cout << "Masukan Bilangan 2 : ";
        cin >> bilangan2;

        cout << "Hasil Penjumlahan : " << bilangan1 + bilangan2 << endl;
        cout << "Hasil Pengurangan : " << bilangan1 - bilangan2 << endl;
        cout << "Hasil Perkalian : " << bilangan1 * bilangan2 << endl;
        cout << "Hasil Pembagian : " << bilangan1 / bilangan2 << endl;

        cout << "Akan Menghitung Ulang : (y/n)";
        cin >> retry;
        
    } while (retry == "y");
     
}