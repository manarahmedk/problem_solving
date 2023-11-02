#include <bits/stdc++.h>
using namespace std;
int main(){
	int counter,max=0;
	cin>>counter;
	long long num[counter];

	for(int i=0;i<counter;i++){
		long long num;
		cin>>num;
		int counter=0;
		while(num){
			if(num%2==0){
				counter++;	
			}else{
				break;
			}
			num=num/2;
		}
		if(counter>max){
			max=counter;
		}
		
	}
	cout<<max;
	
	}
	

