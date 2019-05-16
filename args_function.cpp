
//===================================================
//   Passing arguments to a function
//   Default parameters to a function
//   Function prototyping
//   Variable scoping - global and local
//   Function overloading - same function names 
//===================================================

#include <iostream>

using namespace std;                        // This includes the standard libraries
int multiply = 3;                           // This is a global variable
int mainresult2;                            // Global variable
int sum(int firstval=20, int secondval=10); // Protoyping + default parameters allowed
float sum(float firstval, float secondval); // Function overloading


int main(){

			int a,b;                  // Defining integer values
			int mainresult;           // Local integer
			int multiply = 2;         // This is a local variable
			float x=254.65, y=789.47; // Defining floating values

			cout << "Enter the first value: " << endl;
			cin >> a;
			cout << "Enter the second value: " << endl;
			cin >> b;

			mainresult = multiply * sum(a,b);
			mainresult2 = ::multiply * sum(a,b);

			cout << "The sum of the two values is: " << sum(a,b)<< endl;                // The sum of two given input int values
			cout << "And multiplied by local variable (2): " << mainresult << endl;     // Local variable multiplication
			cout << "But multiplied by global variable(3): " << mainresult2 << endl;    // Global variable multiplication
			cout << "The sum of given default parameters (20+10) is: "<< sum() << endl; // Sum of default parameter 20+10
			cout << "The sum of 134 + default parameter (10) is: " << sum(134) << endl; // 134 + second default parameter 10
			cout << "The sum of floating numbers is: " << sum(x,y) << endl;             // Floating numbers sum - Function overload

			return 0;
}


int sum(int firstval, int secondval)       // No default parameters for declaration allowed
{
			int result=0;
			result = firstval + secondval;
			return result;                       // Returns an integer

}


float sum(float firstval, float secondval) // No default parameters for declaration allowed
{
			float result=0;
			result = firstval + secondval;
			return result;                       // Returns a float

}
