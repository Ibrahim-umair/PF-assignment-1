#include <iostream>

using namespace std;

int main(){

	int n1, n2, n3, n4;
	
	cout<<"Enter n1"<<endl;
	cin>>n1;
	
	cout<<"Enter n2"<<endl;
	cin>>n2;
	
	cout<<"Enter n3"<<endl;
	cin>>n3;
	
	cout<<"Enter n4"<<endl;
	cin>>n4;
	
	
	int max1 = (n1 > n2) ? n1 : n2;
	
	int max2 = (n3 > n4) ? n3 : n4;
	
	
	int max = (max1 > max2) ? max1 : max2;

        int second_max = (n1 == max) ? ((n2>n3 && n2>n4) ? n2 : ((n3>n2 && n3>n4) ? n3 : n4)) :
         (n2 == max) ? ((n1>n3 && n1>n4) ? n1 : (n3>n1 && n3>n4) ? n3 : n4) :
         (n3==max) ? (n1>n2 && n1>n4) ?  n1 : ((n2>n1 && n2>n4) ? n2 : n4) :
         (n1>n2 && n1>n3)? n1  : (n2>n1 && n2>n3) ? n2 : n3  ;
	
	
	
	
	cout<<"The greatest number is : "<<endl<<max;
	cout<<"The 2nd greatest number is : "<<endl<<second_max;



	return 0;
}
