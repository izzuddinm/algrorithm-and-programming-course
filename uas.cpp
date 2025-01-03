#include <iostream>
#include <string>
using namespace std;

struct Tiket {
    string namaPenumpang;
    string jenisTransportasi;
    double jarak; // dalam kilometer
    double biayaPerKm;
    double totalBiaya;
};

double hitungBiaya(double jarak, double biayaPerKm) {
    return jarak * biayaPerKm;
}

void tampilkanMenu() {
    cout << "\n=== Sistem Pemesanan Tiket ===" << endl;
    cout << "1. Lihat Data Tiket" << endl;
    cout << "2. Tambah Tiket Baru" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilihan Anda: ";
}

int main() {
    const int maxTiket = 5; // Maksimal tiket
    Tiket tiket[maxTiket];
    int jumlahTiket = 0;
    int pilihan;

    do {
        tampilkanMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1: { // Lihat data tiket
                if (jumlahTiket == 0) {
                    cout << "\nBelum ada tiket yang dipesan." << endl;
                } else {
                    cout << "\n=== Data Tiket ===" << endl;
                    for (int i = 0; i < jumlahTiket; i++) {
                        cout << "\nTiket ke-" << i + 1 << endl;
                        cout << "Nama Penumpang: " << tiket[i].namaPenumpang << endl;
                        cout << "Jenis Transportasi: " << tiket[i].jenisTransportasi << endl;
                        cout << "Jarak: " << tiket[i].jarak << " km" << endl;
                        cout << "Biaya per km: Rp " << tiket[i].biayaPerKm << endl;
                        cout << "Total Biaya: Rp " << tiket[i].totalBiaya << endl;
                    }
                }
                break;
            }
            case 2: { // Tambah tiket baru
                if (jumlahTiket >= maxTiket) {
                    cout << "\nTidak dapat menambahkan tiket baru. Kapasitas penuh!" << endl;
                } else {
                    cout << "\nMasukkan data untuk tiket ke-" << jumlahTiket + 1 << endl;
                    cin.ignore(); // Membersihkan buffer
                    cout << "Nama Penumpang: ";
                    getline(cin, tiket[jumlahTiket].namaPenumpang);

                    // Validasi input jenis transportasi
                    do {
                        cout << "Jenis Transportasi (Bus/Kereta/Pesawat): ";
                        getline(cin, tiket[jumlahTiket].jenisTransportasi);
                        if (tiket[jumlahTiket].jenisTransportasi == "Bus") {
                            tiket[jumlahTiket].biayaPerKm = 500;
                        } else if (tiket[jumlahTiket].jenisTransportasi == "Kereta") {
                            tiket[jumlahTiket].biayaPerKm = 800;
                        } else if (tiket[jumlahTiket].jenisTransportasi == "Pesawat") {
                            tiket[jumlahTiket].biayaPerKm = 2000;
                        } else {
                            cout << "Jenis transportasi tidak valid. Silakan masukkan lagi!" << endl;
                        }
                    } while (tiket[jumlahTiket].biayaPerKm == 0);

                    // Validasi input jarak perjalanan
                    do {
                        cout << "Jarak perjalanan (km, minimal 1 km): ";
                        cin >> tiket[jumlahTiket].jarak;
                        if (tiket[jumlahTiket].jarak < 1) {
                            cout << "Jarak tidak valid. Harus minimal 1 km. Silakan masukkan lagi!" << endl;
                        }
                    } while (tiket[jumlahTiket].jarak < 1);

                    // Hitung total biaya
                    tiket[jumlahTiket].totalBiaya = hitungBiaya(tiket[jumlahTiket].jarak, tiket[jumlahTiket].biayaPerKm);
                    jumlahTiket++;
                }
                break;
            }
            case 3: {
                cout << "\nTerima kasih telah menggunakan sistem pemesanan tiket!" << endl;
                break;
            }
            default: {
                cout << "\nPilihan tidak valid. Silakan masukkan angka antara 1-3." << endl;
                break;
            }
        }
    } while (pilihan != 3);

    return 0;
}
