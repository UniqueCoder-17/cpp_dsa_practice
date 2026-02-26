#include <iostream>
#include <string>
using namespace std;

char stack[10];
int top = -1;

void push(char x) {
    top++;
    stack[top] = x;
}

char pop() {
    char y = stack[top];
    top--;
    return y;
}

// To evaluate the priority of the given set of operands and operators
int priority(char x) {
    if (x == '^') return 4;
    if (x == '/' || x == '*') return 3;
    if (x == '+' || x == '-') return 2;
    if (x == '(' || x == ')') return 1;
    else return 0;
}

int main() {
    string input;
    cin >> input;
    int size = input.length();

    for (int i = 0; i < size; i++) {
        if (priority(input[i]) == 0) {
            cout << input[i];
        }
        else if (input[i] == '(') {
            push(input[i]);
        }
        else if (input[i] == ')') {
            while (top != -1 && stack[top] != '(') {
                cout << pop();
            }
            if (top != -1) pop();
        }
        else {
            while (top != -1 && priority(input[i]) <= priority(stack[top])) {
                cout << pop();
            }
            push(input[i]);
        }
    }
    while (top != -1) {
        cout << pop();
    }
    return 0;
}