#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0; i<n;i++){
		for(int z=0; z<n;z++){
			cin>>arr[i][z];
	    }
	}
	int sum1=0,sum2=0,x=n-1;
	for(int i=0; i<n;i++){
		for(int z=0; z<n;z++){
			if(i==z){
				sum1+=arr[i][z];
			}
			if(z==x){
				sum2+=arr[i][z];
				x--;
			}
	    }
	}
	cout<<abs(sum1-sum2);
}
