
//===================================================
//     Program to illustrate for loop in cpp
//===================================================

#include <iostream>

using namespace std; //This includes the standard libraries

int main(){


		
		for(int i=6; i<=60; i+=5) // The increment in the for loop
		{

					cout<<i<<endl;

		} 


		for(int i=10; i>=1; i--) // The decrement in the for loop 
		{

					cout<<i<<endl;

		} 


		// To show the effect of printing before and after the increment/decrement
		int x;
		x = 25;
		cout << x-- << endl;
		cout << x << endl;

		return 0;

}
