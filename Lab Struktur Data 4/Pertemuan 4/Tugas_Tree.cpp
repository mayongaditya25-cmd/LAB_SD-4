#include <iostream>
using namespace std;

// Struktur node binary tree
struct Node {
    int data;
    Node* kiri;
    Node* kanan;
};

// Membuat node baru secara dinamis
Node* buatNode(int nilai) {
    Node* baru = new Node;
    baru->data = nilai;
    baru->kiri = nullptr;
    baru->kanan = nullptr;
    return baru;
}

// Menyisipkan angka ke tree
// Aturan: lebih kecil -> kiri, lebih besar -> kanan
Node* sisip(Node* root, int nilai) {
    if (root == nullptr) {
        return buatNode(nilai);          // angka pertama jadi root
    }
    if (nilai < root->data) {
        root->kiri = sisip(root->kiri, nilai);
    } else if (nilai > root->data) {
        root->kanan = sisip(root->kanan, nilai);
    } else {
        cout << "Angka " << nilai << " sudah ada di tree, diabaikan.\n";
    }
    return root;
}

// Pre-order : Root -> Kiri -> Kanan
void preOrder(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preOrder(root->kiri);
    preOrder(root->kanan);
}

// In-order : Kiri -> Root -> Kanan
void inOrder(Node* root) {
    if (root == nullptr) return;
    inOrder(root->kiri);
    cout << root->data << " ";
    inOrder(root->kanan);
}

// Post-order : Kiri -> Kanan -> Root
void postOrder(Node* root) {
    if (root == nullptr) return;
    postOrder(root->kiri);
    postOrder(root->kanan);
    cout << root->data << " ";
}

// Menghapus seluruh tree dari memori
void hapusTree(Node* root) {
    if (root == nullptr) return;
    hapusTree(root->kiri);
    hapusTree(root->kanan);
    delete root;
}

int main() {
    Node* root = nullptr;
    int angka;

    cout << "=== BINARY TREE DINAMIS ===\n";
    cout << "Masukkan angka satu per satu (input 0 untuk berhenti)\n\n";

    while (true) {
        cout << "Masukkan angka: ";
        cin >> angka;

        if (angka == 0) break;           // berhenti saat input 0

        root = sisip(root, angka);
    }

    if (root == nullptr) {
        cout << "\nTree kosong, tidak ada data yang dimasukkan.\n";
        return 0;
    }

    cout << "\nHASIL TRAVERSAL\n";

    cout << "Pre-order  : ";
    preOrder(root);
    cout << endl;

    cout << "In-order   : ";
    inOrder(root);
    cout << endl;

    cout << "Post-order : ";
    postOrder(root);
    cout << endl;

    hapusTree(root);                     // bebaskan memori
    return 0;
}