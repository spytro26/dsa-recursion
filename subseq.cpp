#include<iostream>
#include<vector>
using namespace std;
int n = 3; 
vector<int> ankush;

void subs(int arr[] , int index){
  //vector<iint> ankush;
  if(index>=3){
    //cout<<"base case"<<endl;
    for(auto p : ankush){
      cout<<p<<" ";
    }
    //for(int i =0; i<ankush.size(); i++){
      //cout<<ankush[i]<<" ";

    //}

    cout<<endl;
    return; 
  }
//  ankush.push_back(arr[index]);
  subs(arr , index+1);
  //ankush.pop_back();
  ankush.push_back(arr[index]);
  subs(arr , index+1);
  ankush.pop_back();


}

int main () {
 int arr [] = { 1 , 2 , 3 };
 // print all the subsequence of the array 
 
 subs(arr , 0);
}
