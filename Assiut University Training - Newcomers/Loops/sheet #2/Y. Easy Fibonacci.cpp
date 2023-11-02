#include <bits/stdc++.h>
using namespace std;
int main(){
	int count;
	cin>>count;
	int fir=0,sec=1,sum=0;
		if(count==1){
			cout<<fir;
		}else if(count==1){
			cout<<fir<<" "<<sec;
		}else{
			cout<<fir<<" "<<sec<<" ";
			for(int i=2;i<count;i++){
			sum=fir+sec;
			cout<<sum<<" ";
			fir=sec;
			sec=sum;
			}
	}
	

}
	

