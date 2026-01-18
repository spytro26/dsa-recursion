#include <bits/stdc++.h>
using namespace std;
set<int> st;
void subset(int arr[] , int size , int sum , int i){
	if(st.find(sum) == st.end()){
		st.insert(sum);
		

	}
	if(i>=size){
		return;
	}

	subset(arr , size , sum+arr[i], i+1);
	subset(arr , size , sum , i+1 );

}
int main () {
	// we are going to perform the subset sum 
	int arr [3] ;
	for(int i = 0; i<3; i++){
		cin>>arr[i];
	}
	int n ;
	cin>>n;
	// we will take and not take
	sort(arr , arr+3);
	subset(arr , n , 0,0);
	for(auto i  : st){
		cout<<i<<" ";
		
	}
	return 0; 
}