//Buat program c++ menggunakan Single LinkedList non circular untuk menyimpan data 10 nilai mahasiswa.
//Program dapatm menambahkan node didepan, dibelakahng, dan setelah nilai tertentu, serta menghapus node berdasarkan nilai yang dipilih

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    // node pertama
    Node* node1 = new Node();
    node1->data = 100;
    node1->next = nullptr;

    //node kedua
    Node* node2 = new Node();
    node2->data = 92;
    node2->next = nullptr;

    //node ketiga
    Node* node3 = new Node();
    node3->data = 45;
    node3->next = nullptr;

    //node keempat
    Node* node4 = new Node();
    node4->data = 87;
    node4->next = nullptr;

    //node kelima
    Node* node5 = new Node();
    node5->data = 71;
    node5->next = nullptr;

    //node keenam
    Node* node6 = new Node();
    node6->data = 99;
    node6->next = nullptr;

    //node ketujuh
    Node* node7 = new Node();
    node7->data = 95;
    node7->next = nullptr;

    //node kedelapan
    Node* node8 = new Node();
    node8->data = 60;
    node8->next = nullptr;

    //node kesembilan
    Node* node9 = new Node();
    node9->data = 55;
    node9->next = nullptr;

    //node kesepuluh
    Node* node10 = new Node();
    node10->data = 88;
    node10->next = nullptr;

    //menyambungkan node satu ke node berikutnya
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = node8;
    node8->next = node9;
    node9->next = node10;

    //tentukan head and tail
    Node* head = node1;
    Node* tail = node10;

    //tampilkan data awal
    Node* temp = head;

    cout<<"Data awal : ";
    while (temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;

    //menambahkan node baru di depan (70)
    Node* node11 = new Node();
    node11->data = 70;
    node11->next = head;

    head = node11;

    cout<<"Setelah menambah node baru di depan : ";
    temp = head;
    while (temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;

    //tambahkan node baru di belakang (50)
    Node* node12 = new Node();
    node12->data = 50;
    node12->next = nullptr;

    tail->next = node12;
    tail = node12;

    cout<<"Setelah menambah node baru di belakang : ";
    temp = head;
    while (temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;

    //tambahkan node baru setelah nilai 45 (0)
    temp = head;

    while (temp->data != 45){
        temp = temp->next; //cari node yang datanya 45
    }

    Node* node13 = new Node();
    node13->data = 0;
    node13->next = temp->next; //menunjuk ke node setelah 45
    temp->next = node13; //node 45 menunjuk ke node baru

    cout<<"Setelah menambah node (0) setelah 45 : ";
    temp = head;
    while (temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;

    //menghapus node (99) 
    temp = head;

    while (temp->next->data != 99){
        temp = temp->next;
    }

    Node* hapus1 = temp->next; //node yang mau dihapus
    temp->next = hapus1->next; //node sebelumnya menunjuk ke node setelahnya
    delete hapus1;

    cout<<"Setelah menghapus node (99) : ";
    temp = head;
    while (temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;

    //menghapus node 60
    temp = head;

    while (temp->next->data != 60){
        temp = temp->next;
    }

    Node* hapus2 = temp->next;
    temp->next = hapus2->next;
    delete hapus2;

    cout<<"Setelah menghapus node (60) : ";
    temp = head;
    while (temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;

    return 0;
}
