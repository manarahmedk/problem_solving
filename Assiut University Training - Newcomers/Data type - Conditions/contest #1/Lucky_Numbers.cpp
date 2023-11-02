#include <bits/stdc++.h>
using namespace std;
int main(){

long long n1,n2,n3,answer;
cin>>n1>>n2>>n3>>answer;
if((n1*n2)+n3==answer){
	cout<<"YES"<<endl;
} else if ((n1*n2)-n3==answer){
	cout<<"YES"<<endl;
}  else if (n1+(n2*n3)==answer){
	cout<<"YES"<<endl;
}  else if (n1-(n2*n3)==answer){
	cout<<"YES"<<endl;
}  else if ((n1-n2)+n3==answer){
	cout<<"YES"<<endl;
}  else if ((n1+n2)-n3==answer){
	cout<<"YES"<<endl;
} else{
	cout<<"NO"<<endl;
}

}

