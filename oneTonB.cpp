#include<iostream>
using namespace std;



void print (int x ){
  if(x == 0 ){
    return; 
  }
  int number =x ; 
  x--;
  print(x);
  cout<<number;

}
int main (){
  // print from 1 to n by backtracking
  int n ;
  cout<<"eter the number";
  cin >>n; 
  print(n);

}
