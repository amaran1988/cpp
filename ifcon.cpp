/*The if condition for cpp*/

#include <iostream>

using namespace std; //This includes the standard libraries 

int main(){

	int age, height;
	
	cout << "Enter the age "<< endl;
	cin >> age;
	cout << "Enter the height "<< endl;
	cin >> height;

	if (age>20 && height>180)
	{
		cout << "A good height for your age" << endl;
	}
	else
	{
		cout << "Not so good combo"<< endl;
	}
	return 0;
}
