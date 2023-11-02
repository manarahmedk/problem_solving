#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
	cin>>num1;
	char opreator;
	cin>>opreator;
	cin>>num2;
	if(opreator== '>' ){
		if(num1>num2){
			cout<<"Right"<<endl;
		}else{
			cout<<"Wrong"<<endl;
		}
	}
	else if(opreator== '<' ){
		if(num1<num2){
			cout<<"Right"<<endl;
		}else{
			cout<<"Wrong"<<endl;
		}
	}
	else if(opreator== '=' ){
		if(num1==num2){
			cout<<"Right"<<endl;
		}else{
			cout<<"Wrong"<<endl;
		}
	}
    return 0;
}
