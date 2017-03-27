#include<iostream>
using namespace std;
int main(){
	int n,count=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]) count++;
		}
		if(count>=1) a[i]=0;
		count=0;
	}
	for(int i=0;i<n;i++){
	   if(a[i]!=0) cout<<a[i]<<" ";
	}
}
