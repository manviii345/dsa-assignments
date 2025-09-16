#include <iostream>
using namespace std;

#define MAX 100

struct Stack {
    int arr[MAX];
    int top;
};

void init(Stack &s) { s.top = -1; }
bool isEmpty(Stack &s) { return s.top == -1; }
void push(Stack &s, int val) { s.arr[++s.top] = val; }
int pop(Stack &s) { return isEmpty(s) ? 0 : s.arr[s.top--]; }

int evaluatePostfix(string expr) {
    Stack s; init(s);
    for (char c : expr) {
        if (isdigit(c)) push(s, c - '0');
        else {
            int b = pop(s), a = pop(s);
            switch (c) {
                case '+': push(s, a + b); break;
                case '-': push(s, a - b); break;
                case '*': push(s, a * b); break;
                case '/': push(s, a / b); break;
            }
        }
    }
    return pop(s);
}

int main() {
    string postfix = "231*+9-"; 
    cout << "Postfix: " << postfix << endl;
    cout << "Evaluated Result: " << evaluatePostfix(postfix) << endl;
}
