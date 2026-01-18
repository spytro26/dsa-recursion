#include<iostream>
using namespace std;
int count = 1; 
void printname(int x ){
   if(count == x+1 ){
     return; 
   }
  cout<<count;
  count++;
  printname(x);
//   count++;
}
int main () {
  int n ; 
  cout<<"enter your name";
  cin>>n;
  printname(n);
  
}
