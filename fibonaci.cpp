#include<iostream>
using namespace std;
int fib(int n ){
  if(n == 0 || n==1){
    return n; 
  }
  return fib(n-1) + fib(n-2);

}
int main () {
  // print the nth fibonaaci number;
  cout<<"enter the number ";
  int n ; 
  cin>>n; 
  cout<<fib(n);
}
