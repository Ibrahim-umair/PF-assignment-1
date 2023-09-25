#include <iostream>
#include <iomanip>
using namespace std;

	int main() {

	int n1, n2, n3, n4, n5;
	
    cout << "Enter the first integer :" << endl;
    cin>>n1;
    
    cout << "Enter the second integer :" << endl;
    cin>>n2;
    
    cout << "Enter the third integer :" << endl;
    cin>>n3;
    
    cout << "Enter the fourth integer :" << endl;
    cin>>n4;
    
    cout << "Enter the fifth integer :" << endl;
    cin>>n5;


   	cout<<setfill(' ')<<left<<setw(5)<<"N1 :"<<setfill('*')<<setw(n1)<<""<<endl;
	cout<<setfill(' ')<<left<<setw(5)<<"N2 :"<<setfill('*')<<setw(n2)<<""<<endl;
	cout<<setfill(' ')<<left<<setw(5)<<"N3 :"<<setfill('*')<<setw(n3)<<""<<endl;
	cout<<setfill(' ')<<left<<setw(5)<<"N4 :"<<setfill('*')<<setw(n4)<<""<<endl;	
	cout<<setfill(' ')<<left<<setw(5)<<"N5 :"<<setfill('*')<<setw(n5)<<""<<endl;	
	
    return 0;
}

