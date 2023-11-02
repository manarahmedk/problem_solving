#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int size1,size2;
	cin>>size1>>size2;
	int arr1[size1];
	int arr2[size2];
	for(int i=0; i<size1;i++){
		cin>>arr1[i];
	}
	for(int i=0; i<size2;i++){
		cin>>arr2[i];
	}
	int flag=0;
	int z=0,counter=0;;
	for(int i=0;i<size1;i++){
		if(arr1[i]==arr2[z]){
			z++;
			counter++;
		}
	}
	if(counter==size2){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
