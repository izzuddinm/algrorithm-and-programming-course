#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    /* Name   : Muhammad Ayom Izzuddin */
    /* Matkul : Algoritma dan Pemrograman */
    /* NIM    : 24011700681 */

    int golongan;
    string jabatan, tunjangan_label;
    float gaji_pokok, total_tunjangan;

    cout << "Masukkan Golongan : ";
    cin >> golongan;

    if (golongan == 1) {
        jabatan = "Manager";
        tunjangan_label = "10%";
        gaji_pokok = 5000000;
        total_tunjangan = gaji_pokok * 0.10;
    } else if (golongan == 2) {
        jabatan = "Supervisor";
        tunjangan_label = "7%";
        gaji_pokok = 4000000;
        total_tunjangan = gaji_pokok * 0.07;
    } else if (golongan == 3) {
        jabatan = "Staff";
        tunjangan_label = "6%";
        gaji_pokok = 3500000;
        total_tunjangan = gaji_pokok * 0.06;
    } else if (golongan == 4) {
        jabatan = "Asisten Staff";
        tunjangan_label = "5%";
        gaji_pokok = 3000000;
        total_tunjangan = gaji_pokok * 0.05;
    } else if (golongan == 5) {
        jabatan = "Junior Staff";
        tunjangan_label = "5%";
        gaji_pokok = 2500000;
        total_tunjangan = gaji_pokok * 0.05;
    } else {
        cout << "Golongan yang anda masukkan tidak terdaftar." << endl;
        return 0;
    }

    float gaji_bersih = gaji_pokok + total_tunjangan;

    cout << fixed << setprecision(2);
    cout << "--- Informasi Gaji ---" << endl;
    cout << "Golongan: " << golongan << endl;
    cout << "Jabatan: " << jabatan << endl;
    cout << "Gaji Pokok: Rp. " << gaji_pokok << endl;
    cout << "Tunjangan (" << tunjangan_label << "): Rp. " << total_tunjangan << endl;
    cout << "Gaji Bersih: Rp. " << gaji_bersih << endl;

    return 0;
}
