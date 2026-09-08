#include <iostream>
using namespace std;

// 
// int main() {
//       int nilai [4];
//       int n;
//       cout << "Masukkan jumlah data: ";
//       cin >> n;
//       for (int i = 0; i < n; i++) {
//           cout << "Masukkan data ke-" << i + 1 << ": ";
//           cin >> nilai[i];
//       }
//       for (int i = 0; i < n; i++) {
//           cout << "nilai ke-" << i + 1 << ": " << nilai[i] << endl;
//       }
//       return 0;
// }

// dynamic array
// int main () {
//     int n;

//     cout << "Masukkan panjang array: ";
//     cin >> n; 
   
//    int* data = new int[n];

//    for (int i = 0; i < n; i++) {
//       data[i] = i * 5;
//       cout << data[i] << " ";

//       if(i < n - 1) {
//          cout << ", ";
//       }
//    }

//    delete[] data;
// }

//nested array (2d)
// int main() {
//    int nilai [3][4] = 
//    {
//       {50, 80, 70, 85},
//       {60, 90, 75, 95},
//       {70, 85, 80, 90}
//    };
   



//    for (int i = 0; i < 3; i++) 
//    {
//        for (int j = 0; j < 4; j++) 
//        {
//            cout << nilai[i][j] << " ";
//        }
//        cout << endl;
//    }
   
//    return 0;
// }

//array 3d
int main() {
   int nilai[3][3][4] = 
   {
      {
         {50, 80, 70, 85},
         {60, 90, 75, 95},
         {70, 85, 80, 90}
      },
      {
         {55, 75, 65, 80},
         {65, 85, 70, 90},
         {75, 90, 85, 95}
      },
      {
         {60, 70, 80, 90},
         {70, 80, 90, 100},
         {80, 90, 100, 110}
      }
   };

   for (int i = 0; i < 3; i++) 
   {
       for (int j = 0; j < 3; j++) 
       {
           for (int k = 0; k < 4; k++) 
           {
               cout << nilai[i][j][k] << " ";
           }
           cout << endl;
       }
       cout << endl;
   }

   return 0;
}