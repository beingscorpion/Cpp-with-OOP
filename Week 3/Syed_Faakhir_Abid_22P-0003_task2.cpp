#include<iostream>
#include<string>

using namespace std;

void subtotal( float arr[],int a){

float total_sum = arr[0];
int j=1;

for(int i=0; i<a; i++){
	
	total_sum = arr[i]+arr[j];
	arr[j] = total_sum;
	j++;
	
}

for (int i=0;i<a; i++){
cout<<arr[i]<<" ";
}



}



int main(){

float arr[]={5.8,2.6,9.1,3.4,7.0};
int a= sizeof(arr)/sizeof(float);
cout<<"array before: \n";
for (int i=0;i<5; i++){
cout<<arr[i]<<" ";
}


cout<<"\n\narray after: \n";
subtotal(arr,a);



return 0;

}
