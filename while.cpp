
//===================================================
//         Program to illustrate the while loop
//===================================================

#include <iostream>

using namespace std; //This includes the standard libraries

int main(){


			int x      = 1;
			int sum    = 0;
			int number = 0;

			cout << "Enter the value :" << endl;
			cin >> number;
		
			do	
			{
				sum = sum + x;
				cout << sum << endl;
			
				x++;

			}
			while(x<1);


			return 0;

}
