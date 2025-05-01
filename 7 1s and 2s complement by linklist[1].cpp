#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    // Constructor
    Node(int value){
        data=value;
        next=NULL;
        prev=NULL;
    }
};

class LinkedList {
public:
    Node* head;

    // Constructor
    LinkedList(){
        head=NULL;
    }

    // Destructor
    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Function to insert a node at the end of the linked list
    void insertEnd(int data) {
        Node* newNode = new Node(data);
        if (head ==NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    // Function to display the linked list
    void displayList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << std::endl;
    }

    // Function to perform 1's complement on the linked list
    void onesComplement() {
        Node* temp = head;
        while (temp != nullptr) {
            temp->data = 1 - temp->data; // 1's complement operation
            temp = temp->next;
        }
    }

    // Function to perform 2's complement on the linked list
    void twosComplement() {
        // Perform 1's complement first
        onesComplement();

        // Add 1 to the result to get 2's complement
        int carry = 1;
        Node* temp = head;
        while (temp != nullptr) {
            temp->data += carry;
            carry = temp->data / 2;
            temp->data %= 2;
            temp = temp->next;
        }

        // If there's still a carry after the addition, add a new node
        if (carry > 0) {
            insertEnd(carry);
        }
    }
};

int main() {
    LinkedList list;

    // Insert binary number into the linked list (for example, 1011)
    list.insertEnd(1);
    list.insertEnd(0);
    list.insertEnd(1);
    list.insertEnd(0);

    cout << "Original Binary Number: ";
    list.displayList();

    // Perform 1's complement
    list.onesComplement();
    cout << "1's Complement: ";
    list.displayList();

    // Perform 2's complement
    list.twosComplement();
    cout << "2's Complement: ";
    list.displayList();

    return 0;
}
