#include <bits/stdc++.h>
using namespace std;
int main(){
long long num1,num2;
	cin>>num1;
	char opreator;
	cin>>opreator;
	cin>>num2;
	if(opreator== '+' ){
		cout<<num1+num2;
	}
	else if(opreator== '-' ){
		cout<<num1-num2;
	}
	else if(opreator== '*' ){
		cout<<num1*num2;
	}
	else if(opreator== '/' ){
		cout<<num1/num2;
	}
    return 0;
}
