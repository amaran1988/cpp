
//==========================================================
//     For loop - increment and decrement
//     Arrays definition and using in loops
//     Effect of printing before/after increment/decrement
//     Multidimensional Arrays
//===========================================================

#include <iostream>

using namespace std;                                    // This includes the standard libraries

int main(){
		cout << " " << endl;
		cout << "------------------Array defined by loop---------------------------" << endl;
	
		int array_size = 15, sum=0;
		int my_array[array_size];


		for(int i=0; i<=array_size-1; i++)                  // The increment in the for loop
		{
					my_array[i] = 65+i;
					cout << i << "---> " << my_array[i] << endl;
		}


		for(int i=array_size-1; i>=0; i--)                  // The decrement in the for loop
		{
					sum += my_array[i];
		}
	
		cout << " " << endl;
		cout << "------------------Sum of array using loop---------------------------" << endl;
		cout << "The Sum of the array is: " << sum << endl; // The Sum of the array printed
		cout << " " << endl;
		cout << "------------------Effects of ++x and x++---------------------------" << endl;
	
		int x=25, y=25;

		cout << "x: "   << x     << endl;
		cout << "x++: " << x++   << endl;
		cout << "x: "   << x     << endl;
		cout << "y: "   << y     << endl;
		cout << "++y: " << ++y   << endl;
		cout << "y: "   << y     << endl;
		cout << " "     << endl;
		cout << "------------------Multidimensional array---------------------------" << endl;

		int multi_array[3][3] = {{1,2,3},{3,4,5},{9,8,7}};  // Defining the multi-dimensional array

		cout << "The Multi-dimensional array is: " << endl;

		for(int row=0; row<3 ; row++)                       // Printing the multi-dimensional array
		{
			cout << "|" << " ";
				for(int col=0; col<3; col++)
				{
						cout << multi_array[row][col] << " " ;
				}
				cout<<"|" << endl;
		}
	
		cout << " " << endl;
		cout << "------------------End of file---------------------------" << endl;
		return 0;
}
