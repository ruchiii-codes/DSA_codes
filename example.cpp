#include<iostream>
using namespace std;

main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=n;j>0;j--){
			for(int k=n;k>i;k--){
				cout<<j<<" ";
			}
		}
		cout<<"$";
	}
}
