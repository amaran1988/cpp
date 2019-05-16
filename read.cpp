/*This script explains the I/O of values in cpp*/

#include <iostream>

using namespace std; //This includes the standard libraries 

int main(){

	int x,y;

	cout << "Enter the first value: " << endl;
	cin >> x;

	cout << "Enter the second value: " << endl;
	cin >> y;

	int sum = x+y;
	int mult = x*y;
	int sub = x-y;
	float div = x/y;
	float rem = x%y;

	cout << "Sum: " << sum << endl;
	cout << "Multiplied: " << mult << endl;
	cout << "Subtracted: " << sub << endl;
	cout << "Divided: " << div << endl;
	cout << "Remainder: " << rem << endl;

}
