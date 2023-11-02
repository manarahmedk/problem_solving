#include <bits/stdc++.h>
using namespace std;
int main(){
    int counter,pos=0,neg=0,odd=0,even=0;
    
	cin>>counter;
	for(int i=1;i<=counter;i++){
		int number;
		cin>>number;
			if(number%2==0){
				even++;
			} 
			if(number%2!=0){
				odd++;
			}
			if(number>0){
				pos++;
			}
			if(number<0){
				neg++;
			}
				
	}
	cout<<"Even: "<<even<<endl;
	cout<<"Odd:  "<<odd<<endl;
	cout<<"Positive: "<<pos<<endl;
	cout<<"Negative: "<<neg<<endl;
}
