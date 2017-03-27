#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;int a[n],num;
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<"Enter the Number"<<endl;
	cin>>num;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if((a[i]+a[j])==num) cout<<"Pair Having Equal Sum="<<" "<<a[i]<<" "<<a[j]<<endl;
		}
	}
}
