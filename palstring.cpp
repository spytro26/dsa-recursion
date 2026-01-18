#include<iostream>
using namespace std;
bool ispal(string s , int left , int right){
  if(left >= right ){
    return true; 
  }
  if(s[left] != s[right]){
    return false;
  }
  left ++; 
  right--; 
 return  ispal(s , left , right); 
  
}
int main () {
  string ankush =   "raj";
  string ayush = "jaaj";
  string ank = "bab";
  if(ispal(ankush ,0 , 2)){
    cout<<ankush<<" is  a string ";
  }
  else {
    cout<<ankush<<" is not a palindrome";
    cout<<endl;
  }
  if(ispal(ayush, 0 , 3)){
    cout<<ayush <<" is  a pal";
    cout<<endl;
  }
  if(ispal(ank, 0 , 2)){
    cout<<ank<<" is  a  pal";


  }
  else {
    cout<<ank <<" is not  a pal";
  }
  

}
