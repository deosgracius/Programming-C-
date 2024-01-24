// ECE 2305 Daily Programming Tutorial 01
// Deo Mwala
// January 8, 2024
//
// This program outputs text to the monitor

#include <iostream>  // <iostream> is required for console input/output
using namespace std; // use the standard namespace for the libraries

int main()           // the "main" function returns an integer and
			 // accepts no arguments
{                    // the bracket "{" starts the function

	// Output text to the monitor
	cout << "ECE 2305 Tutorial 01" << endl;  // the console output (cout) function to displays text on the monitor
	cout << "Deo Mwala" << endl;             // the insertion operator (<<) inserts the text into the output stream
	cout << "January 8, 2024" << endl;       // the text to be displayed is enclosed in double quotes
	cout << endl;                            // the endline (endl) moves the cursor to the next line
	cout << "Hello World!" << endl;
	
	system("pause");    // the pause command needed for the .exe file
	return 0;           // 
}                       // the bracket "}" ends the function

