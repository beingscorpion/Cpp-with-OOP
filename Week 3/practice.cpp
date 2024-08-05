#include <iostream>
#include<string>

using namespace std;

int hello(int a=10);


int main(){

cout<<hello();


int hi[5]= {1,2,3,4,5};

for (int i=0; i<sizeof(hi)/sizeof(int); i++){
	cout<<hi[i]<<endl;
}

for(int j:hi){
	cout<<j<<endl;
}


int hi2[2][5] = {{1,2,3,4,5},{6,7,8,9,0}};

for(int i=0; i< sizeof(hi2) / sizeof(hi2[0]); i++ ){
	for(int j=0; j< sizeof(hi2[0]) / sizeof(hi2[0][0]); j++ ){
		
	}
}


return 0;

}

int hello(int a){

return a;
}
