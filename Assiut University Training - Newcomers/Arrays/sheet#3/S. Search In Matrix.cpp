#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int row,column;
	cin>>row>>column;
	int arr[row][column];
	for(int i=0; i<row;i++){
		for(int z=0; z<column;z++){
			cin>>arr[i][z];
	    }
	}
	int num ,flag=0;
	cin>>num;
	for(int i=0; i<row;i++){
		for(int z=0; z<column;z++){
			if(arr[i][z]==num){
				flag=1;
				break;
			}
	    }
	}
	if(flag==0){
		cout<<"will take number";
	}else{
		cout<<"will not take number";
	}
}
