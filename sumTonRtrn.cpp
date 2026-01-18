// sum from  1 to n with return ; 

#include<iostream>
int sumton(int x){
  int  y   = x; 
  if(x == 1){
    return 1 ; 
  }
  return y + sumton(x-1);

}
using namespace std;
int main () {
  cout <<"enter the number ";
  int n ; 
  cin>>n; 
   int y = sumton(n );
   cout<<y<<"is your answer";

}
