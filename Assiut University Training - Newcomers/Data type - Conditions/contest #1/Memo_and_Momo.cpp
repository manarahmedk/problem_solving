#include <bits/stdc++.h>
using namespace std;
int main(){
 
long long memo,momo,k;
cin>>memo>>momo>>k;
if(memo%k==0&&momo%k==0){
	cout<<"Both"<<endl;
} else if (memo%k==0&&momo%k!=0){
	cout<<"Memo"<<endl;
} else if(memo%k!=0&&momo%k==0){
	cout<<"Momo"<<endl;
} else{
	cout<<"No One"<<endl;
}
 
}
