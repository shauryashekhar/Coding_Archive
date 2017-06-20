// Example program
#include <iostream>
#include <string>
using namespace std;
int stack[10];
int top=-1;

void push(int a)
{
    top++;
    stack[top]=a;
}

void pop()
{
    top--;   
}

void display()
{
    for(int i=0;i<=top;i++)
    {
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}
int main()
{
  int opt,num;
  x:
  cout<<"WELCOME TO STACK!"<<endl;
  cout<<"Select your option"<<endl;
  cout<<"1. Push"<<endl;
  cout<<"2. Pop"<<endl;
  cout<<"3. Display"<<endl;
  cin>>opt;
  switch(opt)
  {
  case 1 :
  cout<<"Enter number to insert"<<endl;
  cin>>num;
  push(num);
  cout<<endl;
    goto x;
  case 2 :
  pop();
  cout<<"Number Deleted"<<endl;
    goto x;
  case 3 :
  display();
    goto x;
  default :
  cout<<"Wrong Option"<<endl;   
    goto x;
  }
}
