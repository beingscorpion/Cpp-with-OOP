#include <iostream>
#include <string>

using namespace std;

char rooms[4][5]={
	{'-','-','-','-','-'},
	{'-','-','-','-','-'},
	{'-','-','-','-','-'},
	{'-','-','-','-','-'},
};



void bookroom();
void available_rooms();
void exit();

	
	

int main(){

	int option;

while(1){	

cout<<"Hotel Room Booking System\n";
cout<<"1. Book a room\n2. Show Available Rooms\n3. Exit\n";
cout<<"Enter your choice: ";
cin>>option;

switch (option){
	case 1:
		bookroom();
		break;
	
	case 2:
		available_rooms();
		break;
	
	case 3:
		exit();
		return 0;
		break;
	
	default:
		cout<<"Invalid input\n";
		break;
}




}

return 0;
}


void bookroom(){
	
	int floor=0,room_num=0, daysofstay=0 , rupees=0;
while(1){
while(1){	
	cout<<"Enter the floor(1-4): ";
	cin>>floor;
	
	if(floor<1 || floor>4 ){  cout<<"Invalid Input\n"; break; }
	
	cout<<"Enter the room(1-5): ";
	cin>>room_num;
	
	if(room_num<1 || room_num>5){ cout<<"Invalid Input\n"; break; }
	
	cout<<"Enter the number of days: ";
	cin>>daysofstay;
	
	
	if(rooms[floor-1][room_num-1]=='*'){
		cout<<"Kindly choose another room\n";
	}
	
	else{

	
	if(floor == 1 || floor == 2 ){
		
	rupees = daysofstay * 10000;
	rooms[floor-1][room_num-1]='*';
	cout<<"Floor: "<<floor<<" Room: "<<room_num<<" successfully booked\n";	
	cout<<"Your total cost for "<<daysofstay<<" days is "<<rupees<<"Rupees\n";
	
	}
	else{
	
	rupees = daysofstay * 6000;
	rooms[floor-1][room_num-1]='*';
	cout<<"Floor: "<<floor<<" Room: "<<room_num<<" successfully booked\n";	
	cout<<"Your total cost for "<<daysofstay<< "days is "<<rupees<<"Rupees\n";
	
	}
	
	}
 break;}
 break;}
}
		


void available_rooms(){
	for (int i=0; i<4;i++){
		for(int j=0; j<5; j++){
			cout<<rooms[i][j]<<" ";
		}
		cout<<endl;
	}
}


void exit(){

	cout<<"Exiting the program. Thank you!";
	
}
