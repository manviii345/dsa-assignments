#include <iostream>
using namespace std;

#define MAX 100

struct Stack {
    char arr[MAX];
    int top;
};

void init(Stack &s) { s.top = -1; }
bool isEmpty(Stack &s) { return s.top == -1; }
void push(Stack &s, char c) { s.arr[++s.top] = c; }
char pop(Stack &s) { return isEmpty(s) ? '\0' : s.arr[s.top--]; }
char peek(Stack &s) { return s.arr[s.top]; }

int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1;
}

string infixToPostfix(string infix) {
    Stack s; init(s);
    string postfix = "";
    for (char c : infix) {
        if (isalnum(c)) postfix += c;
        else if (c == '(') push(s, c);
        else if (c == ')') {
            while (!isEmpty(s) && peek(s) != '(') postfix += pop(s);
            pop(s);
        } else {
            while (!isEmpty(s) && precedence(peek(s)) >= precedence(c)) postfix += pop(s);
            push(s, c);
        }
    }
    while (!isEmpty(s)) postfix += pop(s);
    return postfix;
}

int main() {
    string infix = "A*(B+C)";
    cout << "Infix: " << infix << endl;
    cout << "Postfix: " << infixToPostfix(infix) << endl;
}
