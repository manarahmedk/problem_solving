#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int counter, num1,num2,min=0,max=0;
	cin>>counter;
	while(counter--){
		int sum=0;
		cin>>num1>>num2;
		if(num1>=num2){
			max=num1;
			min=num2;
		}else{
			max=num2;
			min=num1;
		}
			
	   for(int i=min+1;i<=max-1;i++){
	   		if(i%2!=0){
	   			sum+=i;
			   }
	   }
	   cout<<sum<<endl;
	}
	
}
