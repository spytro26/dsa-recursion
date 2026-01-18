#include<iostream>
using namespace std;
void reverseArray(int arr [] , int left , int right ){
  if(left >= right){
    for (int i = 0; i<6; i++){
      cout<<arr[i];
    }
    return; 
  }
  swap(arr[left] , arr[right]);
  left++; 
  right -- ; 
  reverseArray(arr , left, right);
  
}
int main() {
   int arr [] = {1 , 2, 3,4, 5,5};
   // this is the array and we have to reverse it ;

   reverseArray(arr ,0 , 5 );
}
