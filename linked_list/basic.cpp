#include <iostream>
using namespace std;

// ---------------------------------------------------
// Node class: represents a single node of the linked list
// ---------------------------------------------------
class Node {
public:
    int data;      // stores the value
    Node* next;    // pointer to the next node

    // Constructor: creates a new node with given data
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// ---------------------------------------------------
// LinkedList class: wraps head pointer and all operations
// ---------------------------------------------------
class LinkedList {
public:
    Node* head; // pointer to the first node of the list
    int len;    // keeps track of length of the list

    LinkedList() {
        head = NULL;
        len = 0;
    }

    // -------------------------------------------------
    // push_front: insert a new node at the beginning
    // Time Complexity: O(1)
    // -------------------------------------------------
    void push_front(int data) {
        Node* newNode = new Node(data);   // create new node
        newNode->next = head;             // point new node to old head
        head = newNode;                   // update head to new node
        len++;
    }

    // -------------------------------------------------
    // push_back: insert a new node at the end
    // Time Complexity: O(n) since we traverse till last node
    // -------------------------------------------------
    void push_back(int data) {
        Node* newNode = new Node(data);

        // Case 1: list is empty, new node becomes head
        if (head == NULL) {
            head = newNode;
            len++;
            return;
        }

        // Case 2: traverse to the last node
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode; // link last node to new node
        len++;
    }

    // -------------------------------------------------
    // pop_front: remove the first node
    // Time Complexity: O(1)
    // -------------------------------------------------
    void pop_front() {
        if (head == NULL) {
            cout << "List is empty, nothing to pop_front" << endl;
            return;
        }

        Node* temp = head;   // store old head
        head = head->next;   // move head to next node
        delete temp;         // free memory of old head
        len--;
    }

    // -------------------------------------------------
    // pop_back: remove the last node
    // Time Complexity: O(n) since we need second-last node
    // -------------------------------------------------
    void pop_back() {
        if (head == NULL) {
            cout << "List is empty, nothing to pop_back" << endl;
            return;
        }

        // Case 1: only one node in the list
        if (head->next == NULL) {
            delete head;
            head = NULL;
            len--;
            return;
        }

        // Case 2: traverse till second-last node
        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        delete temp->next;   // delete last node
        temp->next = NULL;   // second-last becomes new last node
        len--;
    }

    // -------------------------------------------------
    // insert at a given position (0-indexed)
    // Time Complexity: O(n)
    // -------------------------------------------------
    void insertAtPosition(int position, int data) {
        // insert at beginning
        if (position == 0) {
            push_front(data);
            return;
        }

        // insert at end
        if (position >= len) {
            push_back(data);
            return;
        }

        Node* newNode = new Node(data);
        Node* temp = head;

        // move temp to the node just before desired position
        for (int i = 0; i < position - 1; i++) {
            temp = temp->next;
        }

        newNode->next = temp->next; // link new node to rest of list
        temp->next = newNode;       // link previous node to new node
        len++;
    }

    // -------------------------------------------------
    // delete node at a given position (0-indexed)
    // Time Complexity: O(n)
    // -------------------------------------------------
    void deleteAtPosition(int position) {
        if (head == NULL) {
            cout << "List is empty, nothing to delete" << endl;
            return;
        }

        // delete first node
        if (position == 0) {
            pop_front();
            return;
        }

        // delete last node
        if (position >= len - 1) {
            pop_back();
            return;
        }

        Node* temp = head;

        // move temp to node just before the one to be deleted
        for (int i = 0; i < position - 1; i++) {
            temp = temp->next;
        }

        Node* toDelete = temp->next;   // node that needs to be deleted
        temp->next = toDelete->next;   // skip over the node
        delete toDelete;               // free its memory
        len--;
    }

    // -------------------------------------------------
    // search: returns index of first occurrence, else -1
    // Time Complexity: O(n)
    // -------------------------------------------------
    int search(int value) {
        Node* temp = head;
        int index = 0;

        while (temp != NULL) {
            if (temp->data == value) {
                return index; // found, return position
            }
            temp = temp->next;
            index++;
        }

        return -1; // not found
    }

    // -------------------------------------------------
    // reverse: reverses the linked list in place
    // Time Complexity: O(n)
    // -------------------------------------------------
    void reverse() {
        Node* prev = NULL;
        Node* curr = head;
        Node* nextNode = NULL;

        while (curr != NULL) {
            nextNode = curr->next;  // store next node before breaking link
            curr->next = prev;      // reverse the link
            prev = curr;            // move prev forward
            curr = nextNode;        // move curr forward
        }

        head = prev; // prev is now the new head
    }

    // -------------------------------------------------
    // size: returns number of nodes in the list
    // -------------------------------------------------
    int size() {
        return len;
    }

    // -------------------------------------------------
    // isEmpty: checks if list has no nodes
    // -------------------------------------------------
    bool isEmpty() {
        return head == NULL;
    }

    // -------------------------------------------------
    // print: displays the list
    // -------------------------------------------------
    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// ---------------------------------------------------
// main: demonstrates all operations
// ---------------------------------------------------
int main() {
    LinkedList list;

    // push_back a few elements
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    cout << "After push_back(10,20,30): ";
    list.print();

    // push_front an element
    list.push_front(5);
    cout << "After push_front(5): ";
    list.print();

    // insert at position
    list.insertAtPosition(2, 15); // insert 15 at index 2
    cout << "After insertAtPosition(2, 15): ";
    list.print();

    // search for an element
    int pos = list.search(20);
    cout << "Search 20 found at index: " << pos << endl;

    // delete at position
    list.deleteAtPosition(2); // removes the 15 we just added
    cout << "After deleteAtPosition(2): ";
    list.print();

    // pop_front
    list.pop_front();
    cout << "After pop_front(): ";
    list.print();

    // pop_back
    list.pop_back();
    cout << "After pop_back(): ";
    list.print();

    // reverse the list
    list.reverse();
    cout << "After reverse(): ";
    list.print();

    // size and isEmpty
    cout << "Size of list: " << list.size() << endl;
    cout << "Is list empty? " << (list.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}