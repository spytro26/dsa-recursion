#include<iostream>
#include<vector>
#include<set>
#include <algorithm>

using namespace std;
// done by me and with ehehehehehehehelelelhelheloh

set <vector<int>>st;
// there we are going to implement that 
void printcombo(int arr []  , vector<int> answer , int size , int target , int sum , int currenIndex ){
  if(sum>target  || currenIndex > size ){
    return; 
  }
else if(sum == target){
   if(st.find(answer) == st.end()){
      for(auto i : answer) cout << i << " ";
      cout << endl;  // ✅ print only when unique
      st.insert(answer);
   }
   return; // ✅ important
}

  else {
    answer.push_back(arr[currenIndex]);
    printcombo(arr ,answer , size , target , sum+arr[currenIndex] , currenIndex+1);
    answer.pop_back();
// apply here while loop so that moves to the new unique value hohoheheh    
    printcombo(arr, answer , size , target , sum , currenIndex+1);
    

    
   


  }

}


int main () {
  //  combinatino sum / ; 
   int arr [] = {  2,  5 , 2 , 1 ,2  };
    int target;
    cin>>target; 
    vector<int>answer;
    sort(arr, arr + 5);
    printcombo(arr , answer , 5 , target , 0   , 0 );
    return 0; 



}
