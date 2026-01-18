// write about the quick sort
#include<iostream>
#include<vector>
using namespace std; 
void quicksort(vector<int> &arr , int start , int end  ){
	if(start < end){
		int pivot = start;
		int i = start; 
		int j = end; 
		while(i<j){

			while(arr[i]<=arr[pivot] && i <end){
				i++;
			}
			while(arr[j]>arr[pivot] && j > start){
				j--;
			}
			if(i<j){
				swap(arr[i] , arr[j]);

			}

		}

		swap(arr[pivot], arr[j]);

		quicksort(arr ,start , j-1 );
		quicksort(arr , j+1 , end);


	}

}
int main () {
	vector<int> arr = { 1 , 0 , 9 , -29 , 2 };
	quicksort(arr , 0,4 );
	for(auto i : arr){
		cout<<i<<" ";
	}
}