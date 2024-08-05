#include<iostream>
#include <string>

using namespace std;


void eliminate_duplicates(int &arr[],int &a){
	
	for(int i=0; i<a; i++){
		for(int j=i+1; j<a; j++){
				if(arr[i]==arr[j]){
					arr[j]=0;
				}
		}
	}

	int k=0;
	int count=0;
	
while(k<a){
	for (int i=1; i<a; i++){
		if(arr[i] ==0){
			arr[i]=arr[i+1];
			arr[i+1]=0;
			
		}
		
	}
	k++;
}

for (int i=1; i<a; i++){
		if(arr[i] == 0){
			count++;	
		}
}

a=a-count;
}


int main(){

int a=11;
int arr[a]={58,26,91,26,70,70,91,58,58,66};

cout<<"Before :\n";

for (int i=0;i<a; i++){
		cout<<arr[i]<<" ";
	}
cout<<"\n";

eliminate_duplicates(arr,a);

cout<<"\nAfter :\n";
for (int i=0;i<a; i++){
		cout<<arr[i]<<" ";
	}
cout<<"\n";

return 0;
}
