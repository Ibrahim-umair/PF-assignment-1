#include<iostream>
#include<bitset>
using namespace std;

int main(){

	unsigned int n1, gate1, gate2 ,gate3 ,constant, key;
	
	cout<<"Enter a number"<<endl;
	cin>>n1;
	
	
	
	constant = n1>>24;
	gate3 = (n1<<8)>>24;
	gate2 = (n1<<16)>>24;
	gate1 = (n1<<24)>>24;
	
	//key=const^gate1^gate2^gate3
	
	key = gate1^gate2^gate3^constant;

	bitset<8>Key(key);
	cout<<Key;
	return 0;


}
