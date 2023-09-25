#include<iostream>

using namespace std;


//NAME : IBRAHIM BIN UMAIR 
// ROLLNO : 23I-0520

int main(){

	float n1,slab1, slab2, slab3, slab4, bill;

	cout<<"Enter No. of Gallons"<<endl;
	cin>>n1;
	
	slab1 = (n1-600)*(n1>=600);
	
	slab2= ((n1-350)-slab1)*(n1>=350);
	
	slab3 = ((n1-100)-slab1-slab2)*(n1>=100);
	
	slab4 = (n1)-slab1-slab2-slab3;

	
	//slab*rate	
	

	slab1 = slab1 * 2.60;
	
	slab2 = slab2 * 1.45;
	
	slab3 = slab3 * 0.85;

	slab4 = slab4*0.45;

	bill = (slab4+slab3+slab2+slab1)*1.14;
	
	cout<<bill;
	return 0;


}
