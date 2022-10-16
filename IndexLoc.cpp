#include<iostream>
using namespace std;
int main(){
	
	int i;
	int x;
	int y;
	cout<<"Enter the size of array:";
	cin>>x;
	int array[x];
	for(i-0;i<x;i++){
		cout<<"Enter Array Elements:";
		cin>>array[i];
	}
	cout<<"Enter a number:";
	cin>>y;
	for(i=0;i<x;i++){
		if(array[i]){
			cout<<y<<" exist in given array"<<endl;
		}
		else{
			cout<<"Number does not exist";
		}
		cout<<"Location of searched number is "<<y<<" " " index of array";
		break;
	}
	return 0;
}
