#include<iostream>

using namespace std;

int main(){

	int year, month, day;
	
	cout<<"Enter the year."<<endl;
	cin>>year;
	
	cout<<"Enter the month in numeric form"<<endl;
	cin>>month;
	
	cout<<"Enter the day"<<endl;
	cin>>day;

	string result = (month * day == year%100) ? "This is a magic date!\n" : "This is not a magic date.\n" ;
	cout<<result;
	

	return 0;


}
