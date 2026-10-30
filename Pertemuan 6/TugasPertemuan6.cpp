#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

// Mengubah string menjadi huruf kecil 
string keHurufKecil(string s) {
    for (size_t i = 0; i < s.size(); i++) {
        s[i] = tolower((unsigned char)s[i]);
    }
    return s;
}

void tampilArray(const vector<string> &data) {
    cout << "[";
    for (size_t i = 0; i < data.size(); i++) {
        cout << data[i];
        if (i < data.size() - 1) cout << ", ";
    }
    cout << "]";
}

// Insertion Sort (A-Z) dengan menampilkan proses pergeseran
void insertionSort(vector<string> &data) {
    int n = data.size();

    for (int i = 1; i < n; i++) {
        string kunci = data[i];
        int j = i - 1;

        cout << "\nLangkah " << i << ": menyisipkan \"" << kunci << "\"" << endl;
        cout << "  Sebelum : ";
        tampilArray(data);
        cout << endl;

        bool adaGeser = false;

        // Geser elemen yang lebih besar dari kunci satu posisi ke kanan
        while (j >= 0 && keHurufKecil(data[j]) > keHurufKecil(kunci)) {
            cout << "  Geser   : \"" << data[j] << "\" dari indeks " << j
                 << " ke indeks " << j + 1 << endl;
            data[j + 1] = data[j];
            j--;
            adaGeser = true;
        }

        data[j + 1] = kunci;

        if (!adaGeser) {
            cout << "  Tidak ada pergeseran, \"" << kunci
                 << "\" tetap di indeks " << i << endl;
        } else {
            cout << "  Sisip   : \"" << kunci << "\" ditempatkan di indeks "
                 << j + 1 << endl;
        }

        cout << "  Sesudah : ";
        tampilArray(data);
        cout << endl;
    }
}

int main() {
    int n;

    cout << "=== PROGRAM INSERTION SORT KATA (A-Z) ===" << endl;
    cout << "Masukkan jumlah kata: ";
    cin >> n;

    if (n <= 0) {
        cout << "Jumlah kata harus lebih dari 0." << endl;
        return 0;
    }

    vector<string> data(n);
    for (int i = 0; i < n; i++) {
        cout << "Kata ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    cout << "\nData awal : ";
    tampilArray(data);
    cout << endl;

    cout << "\n--- PROSES INSERTION SORT ---";
    insertionSort(data);

    cout << "\n--- HASIL AKHIR (A-Z) ---" << endl;
    tampilArray(data);
    cout << endl;

    return 0;
}