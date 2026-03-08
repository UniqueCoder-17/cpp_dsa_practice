#include <iostream>
#include <vector>
using namespace std;
int que[10];
int f = -1,r = -1;
int n,o=1;
void enqueue(int x){
if(f == -1 && r ==-1){
    f=0,r=0;
    que[r]=x;
}
else if(r == (n-1)){
    cout<<"Queue Overflow"<<endl;
}
else{
    r = r+1;
    que[r]=x;
}
}
void dequeue(){
    if(f==-1 && r==-1){
        cout<<"Queue is empty";
    }
    else if(f==r){
        int y = que[f];
        f = -1,r = -1;
    }
    else{
 int y = que[f];
 f =f+1;
 cout<<"The element deleted is:"<<y<<endl;
    }
}
void display(){
    for(int i =f;i<=r;i++){
        cout<<que[i]<<endl;
    }
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
    if(r == (n-1)){
    cout<<"Queue Overflow"<<endl;}
   else{ cout<<"Enter the number to enqueue:";
    int k;
    cin>>k;
    enqueue(k);}
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