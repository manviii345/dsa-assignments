#include <iostream>
using namespace std;
#define maxlen 100
typedef struct {
    int element[maxlen];
    int front ,rear;
}
queue;

void init(queue q)
{
    q.front=q.rear=-1;
   
}
int size (queue q)
{
    return (q.rear-q.front+1);
}
bool isempty(queue q)
{
    return ((q.front==-1 )||(q.front>q.rear));

}
bool isfull(queue q)
{
    return (q.rear==maxlen-1);
}
int front (queue q)
{
    if (isempty(q))
        return -1;
    return q.element[q.front];
}
queue enqueue(queue q,int x)
{
    if (isfull(q))
    {
        cout<<"queue is full"<<endl;
        return q;
    }
    if (isempty(q))
        q.front=0;
    q.rear++;
    q.element[q.rear]=x;
    return q;
}
queue dequeue(queue q)
{
    if (isempty(q))
    {
        cout<<"queue is empty"<<endl;
        return q;
    }
    q.front++;
    return q;
}
void print(queue q)
{
    if (isempty(q))
    {
        cout<<"queue is empty"<<endl;
        return ;
    }
    for (int i=q.front;i<=q.rear;i++)
        cout<<q.element[i]<<" ";
    cout<<endl;
}
#include <iostream>
using namespace std;

#define SIZE 5   // Maximum size of the queue

class Queue {
private:
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Check if queue is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Check if queue is full
    bool isFull() {
        return (rear == SIZE - 1);
    }

    // Add element to queue
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is Full!" << endl;
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = value;
        cout << value << " enqueued." << endl;
    }

    // Remove element from queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }
        cout << arr[front] << " dequeued." << endl;
        if (front == rear) {
            front = rear = -1; // Reset queue
        } else {
            front++;
        }
    }

    // Peek at the front element
    void peek() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
        } else {
            cout << "Front element: " << arr[front] << endl;
        }
    }

    // Display all elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Check if Empty\n";
        cout << "6. Check if Full\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            q.enqueue(value);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.peek();
            break;
        case 4:
            q.display();
            break;
        case 5:
            if (q.isEmpty())
                cout << "Queue is Empty." << endl;
            else
                cout << "Queue is not Empty." << endl;
            break;
        case 6:
            if (q.isFull())
                cout << "Queue is Full." << endl;
            else
                cout << "Queue is not Full." << endl;
            break;
        case 0:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice, try again!" << endl;
        }
    } while (choice != 0);

    return 0;
}
