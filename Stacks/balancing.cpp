#include <iostream>
#include <string.h>
using namespace std;
//Implement a stack-based algorithm to check for balanced parentheses, braces, and brackets.
int top = -1;
char given[20];
char stack[20];
void push(char x){
top++;
stack[top]=x;
}
bool pop(char x){
    if(top == -1) return false;
    char y = stack[top];
    top--;
if((y == '('&& x != ')')||(y =='{'&& x != '}')||(y == '['&& x != ']')) return false;
else return true;
}
int main(){
cout<<"Enter the characters:"<<endl;
cin>>given;
bool balanced = true;
for(int i = 0;i<strlen(given);i++){
if(given[i]=='('||given[i]=='{'||given[i]=='[') push(given[i]);
else if(given[i]==')'||given[i]=='}'||given[i]==']'){
    if( !pop(given[i])) {balanced = false; 
    break;}
}}
if(top == -1 && balanced) cout<<"Balanced"<<endl;
else cout<<"Unbalanced"<<endl;
}
