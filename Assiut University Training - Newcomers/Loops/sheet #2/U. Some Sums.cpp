#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int counter,num1,num2;
	long long sum=0;
	cin>>counter>>num1>>num2;
		
	   for(int i=1;i<=counter;i++){
	   		if(i / 10 == 0){
			if(i>=num1 && i<=num2){
				sum += i;
			}
		} else {
			int myNum = i; // 12
			int mySum = 0;
			while(myNum){ // 1
				int digit = myNum % 10; // 1
				mySum += digit; // 2 + 1 = 3
				myNum /= 10; // 1 / 10 = 0
			}
			if(mySum >= num1 && mySum <= num2){
				sum += i;
			}
		}
	   		
	   		
	   }
	   cout<<sum<<endl;
	}
	

