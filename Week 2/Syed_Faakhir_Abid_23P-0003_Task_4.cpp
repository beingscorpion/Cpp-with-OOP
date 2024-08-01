#include<iostream>

using namespace std;


int main(){

int rows;

cin>>rows;


for (int i=1; i<=rows; i++){
	for (int j=0; j<=rows; j++){
	
	if(i>j){
	cout<<"*";
	}
	else{
	cout<<" ";
	}
	
	}
cout<<endl;

}


for (int i=rows-1; i>=1; i--){
	for (int j=0; j<=rows; j++){
	
	if(i>j){
	cout<<"*";
	}
	else{
	cout<<" ";
	}
	
	}
cout<<endl;

}







return 0;

}

