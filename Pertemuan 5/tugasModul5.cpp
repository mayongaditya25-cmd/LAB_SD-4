#include <iostream>
using namespace std;

const int MAKS = 100;

int binarySearchIteratif(int data[], int n, int target) {
    int kiri = 0;
    int kanan = n - 1;

    while (kiri <= kanan) {
        int tengah = kiri + (kanan - kiri) / 2;

        if (data[tengah] == target) {
            return tengah;       
        } else if (data[tengah] < target) {
            kiri = tengah + 1;      
        } else {
            kanan = tengah - 1;
        }
    }

    return -1;    
}

int main() {
    int data[MAKS];
    int n;

    cout << "Pencarian Nilai Mahasiswa (Binary Search Iteratif)" << endl;

    // Input jumlah data
    do {
        cout << "Masukkan jumlah data (1 - " << MAKS << ") : ";
        cin >> n;
        if (n < 1 || n > MAKS) {
            cout << "Jumlah data tidak valid, silakan ulangi." << endl;
        }
    } while (n < 1 || n > MAKS);

    // Input data nilai (harus terurut ascending)
    cout << "\nMasukkan data nilai secara ASCENDING (kecil ke besar):" << endl;
    for (int i = 0; i < n; i++) {
        bool valid;
        do {
            valid = true;
            cout << "Nilai ke-" << i + 1 << " : ";
            cin >> data[i];

            if (i > 0 && data[i] < data[i - 1]) {
                cout << "Data harus terurut ascending (tidak boleh lebih kecil dari "
                     << data[i - 1] << "). Silakan ulangi." << endl;
                valid = false;
            }
        } while (!valid);
    }

    cout << "\nData nilai: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    // Input nilai yang dicari
    int cari;
    cout << "\nMasukkan nilai yang ingin dicari : ";
    cin >> cari;

    int hasil = binarySearchIteratif(data, n, cari);

    // Menampilkan hasil
    cout << "\n=== Hasil Pencarian ===" << endl;
    if (hasil != -1) {
        cout << "Data ditemukan." << endl;
        cout << "Nilai " << cari << " berada pada indeks ke-" << hasil << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }

    return 0;
}