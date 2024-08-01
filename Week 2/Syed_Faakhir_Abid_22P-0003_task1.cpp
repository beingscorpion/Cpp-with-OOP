#include<iostream>
using namespace std;

int main(){

char option;
char option2;
int price = 300;

while(1){

cout<<"Do you want a burger? Y/N"<<endl;
cin>>option;


if(option == 'Y' || option =='y'){
	
	cout<<"burger added\n";

	cout<<"Do you want to add fries and cold drink for 200rs? Y/N";
	cin>>option2;
	

if(option2=='Y' || option2=='y'){
	
cout<<"Thank you\n";
cout<<"Your total Bill is: "<<price+200;
return 0;
}
 else if(option2=='n' || option2=='N'){
	
cout<<"Your choice! Thank you\n";
cout<<"Your total Bill is: "<<price;
return 0;

}
else {cout<<"invalid input\n";}
}


else if(option== 'N' || option == 'n'){

cout<<"No problem. See you next time\n";
return 0;


}

else{
cout<<"Invalid Input\n";
continue;

}

}



return 0;

}
