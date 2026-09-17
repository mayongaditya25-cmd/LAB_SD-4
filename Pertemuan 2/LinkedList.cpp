// linkedlist
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    // Membuat node pertama
    Node* node1 = new Node();
    node1->data = 10;
    node1->next = nullptr;

    //membuat node ke 2
    Node* node2 = new Node();
    node2->data = 20;
    node2->next = nullptr;

    node1 -> next = node2;

    //tentukan head and tail
    Node* head = node1;
    Node* tail = node2;

    //tambahkan node baru di akhir
    Node* node3 = new Node();
    node3-> data = 50;
    node3->next = nullptr;

    tail->next = node3;
    tail=node3;

    //tambahkan node baru di depan
    Node* node4 = new Node();
    node4->data = 5;
    node4->next = head;

    head = node4;

    //tambahkan node baru di tengah
    Node* node5 = new Node();
    node5->data = 30;
    node5->next = node2->next; //node baru menunjuk ke node2
    node2->next = node5; //node2 menunujuk ke node baru

    //tampilkan linked list
    Node* temp = head;

    while (temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
     //Menghapus node paling belakang
    temp = head;
    
    while (temp->next !=tail){
        temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = nullptr;

    cout<<"Setelah hapus node paling belakang : ";
    temp = head;
    while (temp != nullptr){
        cout<<temp ->data<<" ";
        temp = temp->next;
    }

    cout<<endl;

    //menghapus node paling depan
    temp = head;
    head = head ->next;
    delete temp;

    cout<<"Setelah hapus node paling depan : ";
    temp = head;
    while (temp!= nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;

    //menghapus node tengah
    temp = head;

    while(temp->next->data != 20){
        temp = temp->next;
    }

    Node*hapus = temp->next; //node yang akan dihapus
    temp->next = hapus->next; //node sebelum yang akan dihapus
    delete hapus;

    cout<<"Setelah hapus node tengah : ";
    temp = head;
    while (temp != nullptr){
        cout<<temp->data<< " ";
        temp = temp->next;
    }

    return 0;
}