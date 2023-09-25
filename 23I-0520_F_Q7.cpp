#include<iostream>
#include<bitset>
using namespace std;

int main(){

	short unsigned int n1, gcode ;
	
	cout<<"Enter a number"<<endl;
	
	cin>>n1;
	gcode = (n1>>1)^n1;
	
	bitset<16>Gcode(gcode);
	
	cout<<Gcode;

	return 0;


}
