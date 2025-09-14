#include <iostream>
using namespace std;

#define MAX 100

struct Stack {
    char arr[MAX];
    int top;
};

void init(Stack s) { s.top = -1; }
bool isEmpty(Stack s) { return s.top == -1; }
bool isFull(Stack s) { return s.top == MAX - 1; }
void push(Stack s, char c) { if (!isFull(s)) s.arr[++s.top] = c; }
char pop(Stack s) { return isEmpty(s) ? '\0' : s.arr[s.top--]; }

string reverseString(string str) {
    Stack s; init(s);
    for (char c : str) push(s, c);
    string rev = "";
    while (!isEmpty(s)) rev += pop(s);
    return rev;
}

int main() {
    string str = "DataStructure";
    cout << "Original: " << str << endl;
    cout << "Reversed: " << reverseString(str) << endl;
}