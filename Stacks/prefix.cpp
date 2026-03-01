#include <iostream>
#include <string>
#include <stack>
#include <algorithm> 
using namespace std;

// Function for priority of operators
int priority(char x) {
    if (x == '^') return 4;
    if (x == '/' || x == '*') return 3;
    if (x == '+' || x == '-') return 2;
    if (x == '(' || x == ')') return 1;
    return 0;
}

int main() {
    string input, output = "";
    stack<char> s;

    // Get input from user
    if (!(cin >> input)) return 0;
    reverse(input.begin(), input.end());

    for (char ch : input) {
       
        if (priority(ch) == 0) {
            output += ch;
        } 
       
        else if (ch == ')') {
            s.push(ch);
        } 
        
        else if (ch == '(') {
            while (!s.empty() && s.top() != ')') {
                output += s.top();
                s.pop();
            }
            if (!s.empty()) s.pop(); // Remove the ')'
        } 
   
        else {
           
            if (ch == '^') {
                while (!s.empty() && priority(ch) <= priority(s.top())) {
                    output += s.top();
                    s.pop();
                }
            } else {
                while (!s.empty() && priority(ch) < priority(s.top())) {
                    output += s.top();
                    s.pop();
                }
            }
            s.push(ch);
        }
    }

   
    while (!s.empty()) {
        output += s.top();
        s.pop();
    }

    
    reverse(output.begin(), output.end());

    cout << "Prefix Expression: " << output << endl;

    return 0;
}