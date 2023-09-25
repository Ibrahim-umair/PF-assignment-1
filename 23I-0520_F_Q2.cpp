#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    int n1, n2, n3;

    
    cout << "Enter the value of n1: ";
    cin >> n1;
    
    cout << "Enter the value of n2: ";
    cin >> n2;

    cout << "Enter the value of n3: ";
    cin >> n3;

	n1 %= 10;
	n2 %= 10;
    n3 %= 10;
    
    bool result = (n1==n2) || (n2==n3) || (n1==n3);
    
    cout<<boolalpha<<result; 
    
    



    return 0;
}


