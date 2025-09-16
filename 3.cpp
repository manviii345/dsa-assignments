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

bool isBalanced(string expr) {
    Stack s; init(s);
    for (char c : expr) {
        if (c == '(' || c == '{' || c == '[') push(s, c);
        else if (c == ')' || c == '}' || c == ']') {
            if (isEmpty(s)) return false;
            char top = pop(s);
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '['))
                return false;
        }
    }
    return isEmpty(s);
}

int main() {
    string expr = "{[()]}";
    cout << expr << (isBalanced(expr) ? " is Balanced" : " is Not Balanced") << endl;
}
