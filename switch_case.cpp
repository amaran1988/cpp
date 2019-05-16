/*This program illustrates the need for case statements */


#include <iostream>

using namespace std; //This includes the standard libraries 

int main(){

		char grade;

		cout << "Enter your grade: " << endl;
		cin >> grade;

		switch(grade)
		{
			case 'a' :
			case 'A' : cout << "Excellent"         << endl; break ;
			case 'B' : cout << "Very good"         << endl; break ;
			case 'C' : cout << "Future Politician" << endl; break ;
			default  : cout << "Invalid entry"     << endl; break ;
		}

		return 0;

}
