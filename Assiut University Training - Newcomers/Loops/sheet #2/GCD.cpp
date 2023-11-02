#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int num1,num2,gcd=1,max=0;
	cin>>num1>>num2;
	
	if(num1>=num2){
		max=num1;
	}else{
		max=num2;
	}
	
	   for(int i=1;i<=max;i++){
		if((num1%i==0)&&(num2%i==0)){
			gcd=i;
		}
	   }	
	cout<<gcd;
}
