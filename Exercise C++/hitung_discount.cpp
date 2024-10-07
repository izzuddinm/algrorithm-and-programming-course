#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    
    /* Name   : Muhammad Ayom Izzuddin */
    /* Matkul : Algoritma dan Pemrograman */
    /* NIM    : 24011700681 */

    cout << "## ============= Hitung Total Bayar Dengan Discount ============ ##" << endl;

    int price_items, total_items;
    float price_before_discount, price_after_discount, total_discount;

    cout << "Masukkan Harga Barang : ";
    cin >> price_items;

    cout << "Masukan Total Barang : ";
    cin >> total_items;

    price_before_discount = price_items * total_items;

    if (total_items > 100) {
        total_discount = 0.15 * price_before_discount;
        price_after_discount = price_before_discount - total_discount;
        cout << "Selamat Anda Mendapatkan Discount 15%" << endl;
    } else {
        total_discount = 0.05 * price_before_discount;
        price_after_discount = price_before_discount - total_discount;
        cout << "Selamat Anda Mendapatkan Discount 5%" << endl;
    }

    cout << fixed << setprecision(2);       
    cout << "Total Harga Belanja Sebelum Discount : " << "Rp. " << price_before_discount << endl;
    cout << "Total Harga Belanja Setelah Discount : " << "Rp. " << price_after_discount << endl;

}