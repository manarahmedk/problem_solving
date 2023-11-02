#include <bits/stdc++.h>
using namespace std;
int main(){
int size;
cin>>size;
int arr[size];
for(int i=0; i<size; i++){
  cin>>arr[i];
}

int min = arr[0];
for(int i=1; i<size-1; i++){
         if(arr[i]<min)
             min=arr[i];
}
int Counter=0;
for(int i=0; i<size; i++){
  if(arr[i]==min)
  		Counter++;
}
Counter%2==0?  cout<<"Unlucky" : cout<<"Lucky";
}
	

