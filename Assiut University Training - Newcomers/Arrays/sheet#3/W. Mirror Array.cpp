#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int lines,size;
	cin>>lines>>size;
	while(lines--){
		int arr[size];
		for(int i=0;i<size;i--){
			cin>>arr[i];
		}
		for(int i=size-1;i>=0;i--){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	
	
	
}
