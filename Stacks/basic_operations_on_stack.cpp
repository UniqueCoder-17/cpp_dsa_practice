#include <iostream>
using namespace std;
//declartion of stack
int stack[100];
int top = -1;
int n;
void push(){
    int x;
if(top == (n-1)){ cout<<"stack overflow"<<endl;}
   else{ top++;
    cout<<"Enter the value to be pushed:";
    cin>>x;
    
stack[top]=x;}
 
}
void pop(){
    if(top == -1) cout<<"stack underflow"<<endl;
   else{ int y = stack[top];
    top--;
    cout<<"popped element:"<<y<<endl;}
 
}
void peek(){
    if(top == -1) printf("stack is empty");
    else {cout<<stack[top]<<endl;}
    
}

void display(){
    for(int i = top;i>=0;i--){
       cout<<stack[i]<<endl;
    }

}
int main(){
cout<<"Enter the size of stack:";
cin>>n;
cout<<"Enter your choice"<<endl;
int k = 1;
int p;
while (k != 0)
{
cout<<"push:1"<<endl<<"pop:2"<<endl<<"peek:3"<<endl<<"display:4"<<endl<<"exit:5"<<endl;
cin>>p;
switch (p)
{
case 1:
    push();
    break;
case 2:
    pop();
    break;    
case 3:
    peek();
    break;
case 4:
    display();
    break; 
case 5:
    k == 0;
    break;   
}
}
}