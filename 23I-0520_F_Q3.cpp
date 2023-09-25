#include<iostream>
#include<cmath>
#include<bitset>

using namespace std;

int main (){

	int c=30;
	int b, p;
	float i, N, x, y, z, up, down, fraction, ans;
	
	cout<<"Enter yearly interest rate(i)"<<endl;
	cin>>i;
	
	cout<<"Enter your balance (b)"<<endl;
	cin>>b;
	
	cout<<"Enter your monthly payment(p)"<<endl;
	cin>>p;
	

	cout<<"Enter value of c"<<endl;
	cin>>c;

	i/= 365;
	
	i+=1;
	
	x= pow(i,c);
	
	x= 1-x; 
	
	y= b/p;
	
	z=(y*x);	
		
	z+=1;
	
	up= log(z);
	
	down = log(i);
	
	fraction = up/down;
	
	ans = fraction/(-c);
	
	cout<<"It will take you "<<ans<<" months."<<endl;
	
	
	
		
	return 0;

}
