#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;
    LinkedList()
    { head = nullptr;
     }

    //atbeginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    int delete1(int key){
        int count=0;
        while (head && head->data==key)
        {
            Node *temp=head;
            head=head->next;
            delete temp;
            count++;
        }
        Node *temp=head;
            while (temp && temp->next) {
        if (temp->next->data == key) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            count++;
        } else {
            temp = temp->next;
        }
    }
    return count;
}
void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    LinkedList l;
    l.insertAtBeginning(10);
        l.insertAtBeginning(20);    
        l.insertAtBeginning(10);
        l.insertAtBeginning(30);        
        cout<<l.delete1(10);
        l.display();
    return 0;   }
    
           