#include <bits/stdc++.h>
using namespace std;
int main(){
    int counter;    
	cin>>counter;
	long long fact=1;
	while(counter){
	    int number;
		cin>>number;
	for(int i=1;i<=number;i++){
		fact*=i;
			
	}
	counter--;
	cout<<fact<<endl;
	fact=1;
}
}
