#include <iostream>  
using namespace std; 

int main()          
{                   
	int IntVar = 100;
        cout << "The address of IntVar is: " << &IntVar << endl;
        cout << "The IntVar requires " << sizeof(IntVar) << " bytes" << endl;
        cout << "The value of IntVar is: " << IntVar << endl;
        cout << endl;
	return 0;           
}                       