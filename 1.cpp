#include <iostream>
using namespace std;

#define MAX 100

struct Stack {
    int arr[MAX];
    int top;
};

void init(Stack s) {
    s.top = -1;
}

bool isEmpty(Stack s) {
    return s.top == -1;
}

bool isFull(Stack s) {
    return s.top == MAX - 1;
}

void push(Stack s, int x) {
    if (isFull(s)) {
        cout << "Stack Overflow\n";
        return;
    }
    s.arr[++s.top] = x;
}

void pop(Stack s) {
    if (isEmpty(s)) {
        cout << "Stack Underflow\n";
        return;
    }
    cout << "Popped: " << s.arr[s.top--] << endl;
}

void peek(Stack s) {
    if (isEmpty(s)) cout << "Stack is empty\n";
    else cout << "Top: " << s.arr[s.top] << endl;
}

void display(Stack s) {
    if (isEmpty(s)) {
        cout << "Stack is empty\n";
        return;
    }
    cout << "Stack: ";
    for (int i = s.top; i >= 0; i--)
        cout << s.arr[i] << " ";
    cout << endl;
}

int main() {
    Stack s;
    init(s);
    int choice, val;

    while (true) {
        cout << "\n1.Push 2.Pop 3.isEmpty 4.isFull 5.Display 6.Peek 7.Exit\n";
        cin >> choice;
        switch (choice) {
            case 1: cout << "Enter value: "; cin >> val; push(s, val); break;
            case 2: pop(s); break;
            case 3: cout << (isEmpty(s) ? "Empty\n" : "Not Empty\n"); break;
            case 4: cout << (isFull(s) ? "Full\n" : "Not Full\n"); break;
            case 5: display(s); break;
            case 6: peek(s); break;
            case 7: return 0;
            default: cout << "Invalid choice\n";
        }
    }
}
