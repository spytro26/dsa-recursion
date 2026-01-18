#include<iostream>
using namespace std;
int count = 1;
void  printnumber(int x ){
   int number = count; 
  if(x+1 == count){
    return ; 
  }
  count++;

  printnumber(x);
  cout<<number;


}
int main () {
  cout<<"enter the number";
  int n ; 
  cin>>n;
  printnumber(n);
}
