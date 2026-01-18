#include<iostream>
#include<vector>
using namespace std;
// done by me and with ehehehehehehehelelelhelheloh


// there we are going to implement that 
void printcombo(int arr []  , vector<int> answer , int size , int target , int sum , int currenIndex ){
  if(sum>target  || currenIndex >= size ){
    return; 
  }
  else if(sum == target){
    for(auto i : answer){
      cout<<i<<" ";
    }
    cout<<endl; 

  }
  else {
    answer.push_back(arr[currenIndex]);
    printcombo(arr ,answer , size , target , sum+arr[currenIndex] , currenIndex);
    answer.pop_back();
    
    printcombo(arr, answer , size , target , sum , currenIndex+1);
    

    
   


  }

}


int main () {
  //  combinatino sum / ; 
   int arr [] = { 2 ,3 , 5 };
    int target;
    cin>>target; 
    vector<int>answer;
    printcombo(arr , answer , 3 , target , 0   , 0 );
    return 0; 



}