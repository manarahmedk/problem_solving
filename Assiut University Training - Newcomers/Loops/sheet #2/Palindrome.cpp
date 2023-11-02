#include <bits/stdc++.h>
using namespace std;
int main(){
    string num1;
	cin>>num1;
	int size=num1.size();
	char num2[size];
	int count=0,res1,res2;
	for(int i=size-1;i>=0;i--){
		num2[count]=num1[i];
		count++;	
	}
	stringstream s1,s2;
	s1<<num1;
	s1>>res1;
	s2<<num2;
	s2>>res2;
	cout<<res2<<endl;
	if(res1==res2){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

}
