#include<iostream>

using namespace std;


int main(){

int option1,path;
int kitchen,room;
int option;

while(1){
cout<<"WELCOME TO THE HAUNTED MANSION\nWhere would you like to go\n";
cout<<"1. Witch's Kitchen\n2. Butcher's Basement'\n3. Hell's Paradise\n";
cin>>option1;

switch(option1){
case 1:
	cout<<"Welcome to Witch's Kitchen'\nWhat do you like to eat\n";
	cout<<"1. Candy\n2. Potion\n";
	cin>>kitchen;
	if(kitchen==1|| kitchen ==2 ){
	cout<<"It had poison.You died!\n Game Over";
	return 0;
	}
	else{
	cout<<"Invalid Input";
	}
	
	break;

case 2:
	cout<<"Welcome to Butcher's Basement'\nWhere do you like to go\n";
	cout<<"1. room 1\n2. room 2\n";
	cin>>room;
	if(room==1 ){
	cout<<"Great! You found treasure! ";
	cout<<"\n DO you want to quit(1/0):";
	cin>>option;
	
	switch(option){
	case 1:
		return 0;
		break;
		case 0:
			cout<<"please restart the game";
			return 0;
			break;
	default:
	cout<<"Invlaid Input";
	break;
	}
	}
	else if(room ==2){
	
	cout<<"Witch killed you!\n Game over";
	return 0;
	}
	else{
	cout<<"Invalid Input";
	}
	
	
	break;
	
case 3:
	cout<<"Welcome to Hell's Paradise'\nWhere do you like to go\n";
	cout<<"1. Path 1\n2. Path 2\n";
	cin>>path;
	if(path==1 ){
	cout<<"You have been trapped by the glorious flowers!\n Game Over ";
	return 0;
	}
	else if(path ==2){
	
	cout<<" yay! you found a treasure lets go back to home safely!\ndo you want to quit!Y/N";
 cin>>option;
	
	switch(option){
	case 1:
		return 0;
		break;
		case 0:
			cout<<"please restart the game";
			return 0;
			break;
		
	default:
	cout<<"Invlaid Input";
	break;
	}
	
	}
	else{cout<<"invalid";
	}
	
	break;
	

default:
	cout<<"Invlaid Input";
	break;
}



}





return 0;

}

