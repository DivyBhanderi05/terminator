#include<iostream>

using namespace std;

int main(){
	
	int age;
	cout<<"Enter Age: ";
	cin>>age;
	
	try{
	
		if(age<18){
			throw age;
		}
		else{
			cout<<"Eligible";
			
		}
	}
	catch(int n){
		
			cout<<"Not Eligible";
		}
	
	
	return 0;
}

