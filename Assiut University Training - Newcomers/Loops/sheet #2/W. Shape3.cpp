#include <bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin>>size;
	int space=size-1;;
	for(int i=1;i<=size;i++){
		
		for(int x=1;x<=space;x++){
			cout<<" ";
		}
		
		for(int z=1;z<i*2;z++){
			cout<<"*";
		
		}
		space--;
		cout<<endl;		
	}
	space=1;
	for(int i=size;i>=1;i--){
		
		for(int x=1;x<space;x++){
			cout<<" ";
		}
		
		for(int z=i*2;z>1;z--){
			cout<<"*";
		
		}
		space++;
		cout<<endl;		
	}

}
	

