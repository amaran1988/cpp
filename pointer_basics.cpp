
//===================================================
//     Basics on Pointers and values
//     Passing by values and references
//===================================================


#include <iostream>

using namespace std; //This includes the standard libraries

void PassByValue(int val)
{
		val = 100;
}

void PassByReference(int *val)
{
		*val = 100;
}


int main(){



		cout << " " << endl;
		cout << "-------------- Basic definition of Pointers-------------" << endl;
		cout << " " << endl;




		int var=100;                                                     // Defining integer
		cout << "The address &var: " << &var << endl;                    // The address of var

		int *intP;                                                       // Defining the pointer for the integer
		intP = &var;                                                     // Pointing to the address of the value
		
		cout << "intP is the address of var: "<< intP << endl;           // Address
		cout << "*intP is the value of var: "<< *intP << endl;           // Value

		var = 20;                                                        // change value for integer
		cout << "intP will never change "<< intP << endl;                // Address will remain the same
		cout << "*intP will change after reassignment "<< *intP << endl; // The value would have changed




		cout << " " << endl;
		cout << "-------------- Passing addresses to diff functions--------------" << endl;
		cout << " " << endl;

	
		
		int var_ref = 25; // Define a new var to test

		cout << "Var_ref: "<< var_ref << "   (Original Value)" << endl;
		PassByValue(var_ref); // Passing var by value to outside funcs
		cout << "Var_ref after PassbyValue: " << var_ref << "   (Remains Unchanged)" << endl;
		
		PassByReference(&var_ref); // Passing var by reference to outside funcs
		cout << "Var_ref after PassbyReference: " << var_ref << "   (Changed)"  << endl;

		return 0;

		
		cout << " "  << endl;
		cout << "----------------- End of file -------------------------" << endl;
}
