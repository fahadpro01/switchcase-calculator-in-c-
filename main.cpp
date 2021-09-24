#include<iostream>
using namespace  std;
int main()
{
  int a,b;
  cout<<"Enter two numbers ";
  cin>>a>>b;
  char op;
  cout<<"Enter the operation";
  cin>>op;
  switch(op){
    case '+':
    cout<<a+b<<endl;
    break;
     case '-':
    cout<<a-b<<endl;
    break;
     case '*':
    cout<<a*b<<endl;
    break;
     case '/':
    cout<<a/b<<endl;
    break;
     case '%':
    cout<<a%b<<endl;
    break;
    default:
    cout<<"Try your best";
    break;
  }
  return 0;
}