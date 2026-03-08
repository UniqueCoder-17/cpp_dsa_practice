#include <iostream>
#include <vector>
using namespace std;
int que[10];
int f = -1,r =-1;
int n;
void enqueue(int x){
if(f == -1 && r == -1){
f = 0,r = 0;
que[r] = x;
}
else if(f == (r+1)%n){
    cout<<"Queue is full"<<endl;
}
else{
    r = (r+1)%n;
    que[r] = x;
}}
void dequeue(){
    if(f==-1 && r==-1){
        cout<<"Queue is empty";
    }
    else if(f == r){
        int y = que[r];
        r = -1,f = -1;
    }
    else{
        int y = que[f];
f = (1+f)%n;
    }
}
void display() {
    if (f == -1) {
        cout << "Queue is Empty" << endl;
        return;
    }
    int i = f;
    do {
        cout << que[i] << " ";
        i = (i + 1) % n;
    } while (i != (r + 1) % n);  
    cout << endl;
}
int main(){
cout<<"Enter the size of queue:";
cin>>n;
int p = 0;
while( p != 4){
cout<<"Enque:1\n"<<"Dequeue:2\n"<<"Display:3\n"<<"Exit:4"<<endl;
cin>>p;
switch(p){
    case 1:
    cout<<"Enter the number to enqueue:";
    int k;
    cin>>k;
    enqueue(k);
    break;
    case 2:
    dequeue();
    break;
    case 3:
    display();
    break;
}
}
}