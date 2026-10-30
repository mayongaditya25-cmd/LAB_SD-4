#include <iostream>
#include <algorithm>
using namespace std;    

    //fungsi untuk membagi data berdasarkan pivot yang ditentukan
    int partition(int data[], int low, int high) {
        int pivot = data[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (data[j] < pivot) {
                i++;
                swap(data[i], data[j]);
            }
        }

        swap(data[i + 1], data[high]);
        return i + 1;
    }

    //fungsi untuk mengurutkan data kiri dan kanan dari pivot
    void quicksort(int data[], int low, int high) {
        if (low < high) {
            int pi = partition(data, low, high);
            quicksort(data, low, pi - 1);
            quicksort(data, pi + 1, high);
        }
    }

    int main () {
        int data [] = {5, 2, 4, 1, 3};
        int n = 5;
        
        quicksort(data, 0, n - 1);

        cout << "Hasil Quick sort : ";
        for (int i = 0; i < n; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
        return 0;
    }