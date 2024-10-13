#include <iostream>
using namespace std;

int main () {
    int nilai;
    string grade, keterangan;

    cout << "Masukan nilai akhir mahasiswa : ";
    cin >> nilai;

    if (nilai >= 80) {
        grade = "A";
        keterangan = "Lulus Memuaskan";
    } else if (nilai >= 70) {
        grade = "B";
        keterangan = "Lulus Baik Sekali";
    } else if (nilai >= 65) {
        grade = "B";
        keterangan = "Lulus";
    } else if (nilai >= 55) {
        grade = "B";
        keterangan = "Tidak Lulus";
    } else {
        grade = "E";
        keterangan = "Tidak Lulus";
    }

    cout << "Grade anda adalah " << grade << endl;
    cout << "Anda dinyatakan " << keterangan << endl;
    
}