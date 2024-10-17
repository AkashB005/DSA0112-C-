#include<iostream>
using namespace std;
int main(){
	int n,arr[n];
	cout << "enter the number of elements in the array:";
	cin >> n;
	cout<<"enter the sorted array values:";
	for(int i=0;i<=n;i++){
		cin >> arr[i];
	}
	int j=0;
	while(j<n){
		if(arr[j]!=j){
			cout<<"the smallest missing element is found : "<< j;
			return 0;
		}
			j++;
	}
	cout<<"the smallest missing element is not found ";
}
