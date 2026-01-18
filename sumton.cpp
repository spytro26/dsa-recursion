// sumt from one to n using parameter ; 

#include<iostream>
using namespace std;

void sumton(int x, int sum ){
  if(x <1){
    cout<<sum <<" is your answer ";
    return ; 
  }

  sum = sum+x;
  x--;
  sumton(x , sum );
}
int main (){
  cout <<"enter the number";
  int n ; 
  cin>>n; 
  sumton(n, 0);
}
