#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int size,max;
	long long sum=0;
	cin>>size>>max;
	long long arr[size];
		for(int i=0;i<size;i++){
			cin>>arr[i];
		}
		sort(arr,arr+size);
		reverse(arr,arr+size);
		for(int i=0;i<max;i++){
			if(arr[i]<0){
			 break;	
			}
			sum+=arr[i];
		}
		cout<<sum;
}
