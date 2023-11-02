#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int counter;
	cin>>counter;
	
	for(int j=0;j<=counter;j++){
		string num;
	    cin>>num;
	    int size2=num.size();
	   for(int i=size2-1;i>=0;i--){
		cout<<num[i]<<" ";	
	   }	
	cout<<endl;
	}
    

}
