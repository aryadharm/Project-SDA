#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};


class Queue {
private:
    Node* head;
    Node* tail;

public:
 
    Queue() {
        head = nullptr;
        tail = nullptr;
    }

   
    void enqueue(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        if (tail == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

   
    void dequeue() {
        if (head == nullptr) {
            cout << "Antrian kosong" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        if (head == nullptr) {
            tail = nullptr;
        }
    }


    void display() {
        if (head == nullptr) {
            cout << "Antrian kosong" << endl;
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(int argc, char** argv) {
	
	 Queue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    cout << "Elemen-elemen dalam antrian: ";
    myQueue.display();

    myQueue.dequeue();
    myQueue.dequeue();

    cout << "Elemen-elemen dalam antrian setelah dequeue: ";
    myQueue.display();

    return 0;
	return 0;
}