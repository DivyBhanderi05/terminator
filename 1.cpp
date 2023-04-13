#include<iostream>

using namespace std;

int main(){
	
	int a,b;
	cout<<"Enter Value of A : ";
	cin>>a;
	cout<<"Enter Value of B : ";
	cin>>b;
	try{
	
		if(b==0){
			throw b;
		}
		else{
			cout<<a/b;
			
		}
	}
	catch(int n){
		
			cout<<"Cannot Divide by 0";
		}
	
	
	return 0;
}

