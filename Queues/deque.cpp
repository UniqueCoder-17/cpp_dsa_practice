#include <iostream>
#include <vector>
using namespace std;
int dq[20];
int f = -1,r = -1;
int n,x;
void insert_front(int x){
 if(f ==(r+1)%n){
    cout<<"Deque is full"<<endl;
 }
 else if(f == -1 && r == -1){
f =0,r =0;
dq[f] = x;
 }
 else{
    f = (f-1 + n)%n;
    dq[f]=x; 
 }
}
void insert_rear(int x){
     if(f ==(r+1)%n){
    cout<<"Deque is full"<<endl;
 }
 else if(f == -1 && r == -1){
f =0,r =0;
dq[f] = x;
 }
 else{
    r = (r+1)%n;
    dq[r] = x;
 }}
void delete_front(){
if(f == -1 && r == -1){
    cout<<"Deque is empty"<<endl;}
else if(f== 0 && r == 0){
    int y = dq[f];
    f = -1,r = -1;
}
else{
   int  y = dq[f];
f = (f+1+n)%n;
}
}
void delete_rear(){
  if(f == -1 && r == -1){
    cout<<"Deque is empty"<<endl;}
else if(f== 0 && r == 0){
    int y = dq[f];
    f = -1,r = -1;
}
else{
    int y = dq[r];
    r =(r -1 +n)%n;
}  
}
void display() {
    if (f == -1) {
        cout << "Queue is Empty" << endl;
        return;
    }
    int i = f;
    do {
        cout << dq[i] << " ";
        i = (i + 1) % n;
    } while (i != (r + 1) % n);  
    cout << endl;
}
int main(){
cout<<"Enter size of Deque: ";
cin>>n;
cout<<"Insert at front:1\n"<<"Insert at rear:2\n"<<"Delete front:3\n"<<"Delete rear:4\n"<<"Display:5\n"<<"Exit:6"<<endl;
int p =0;
while(p != 6){
    cout<<"Enter choice: ";
    cin>>p;
    switch (p)
    {
    case 1:
        cout<<"Enter the element you want to insert: ";
        cin>>x;
        insert_front(x);
        break;
    case 2:
        cout<<"Enter the element you want to insert: ";
        cin>>x;
        insert_rear(x);
        break;
    case 3:
     delete_front();
     break;
    case 4:
     delete_rear();
     break;
    
    case 5:
    display();
    break;}
}
}









