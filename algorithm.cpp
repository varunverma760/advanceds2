#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int arr[]={1,2,45,23,11};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cout<<"Enter the key"<<endl;
	cin>>key;
	auto it=find(arr,arr+n,key);
	int index=it-arr;
	if(index==n){
		cout<<"Element is not found";
	}
	else{
		cout<<index<<endl;
	}
	return 0;
}