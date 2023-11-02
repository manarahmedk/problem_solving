#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,num3;
	char opreator,op;
	cin>>num1>>opreator>>num2>>op>>num3;
	if(opreator== '-' ){
	      (num1-num2)==num3?cout<<"Yes":cout<<num1-num2;
	}
	else if(opreator== '*' ){
		  (num1*num2)==num3?cout<<"Yes":cout<<num1*num2;
	}
	else if(opreator== '+' ){
		  (num1+num2)==num3?cout<<"Yes":cout<<num1+num2;
	}
    return 0;
}

