#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1,flag=0;
	cin>>num1;
	int div=num1/2;

	for(int i=2;i<=div;i++){
		if(num1%i==0){
			flag++;
		}	
	}
	if(flag>0)
	cout<<"NO";
	else
	cout<<"YES";

}
