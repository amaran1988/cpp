
//===================================================
//         Class - setters and getters
//===================================================


#include <iostream>
#include <cstring>
#include <string> 

using namespace std; //This includes the standard libraries

class Books{

		public:

					Books(string x) // This is a constructor. This is activated when object enters the scope
					{
						  cout << "We are in constructor now" << endl;
							setName(x); 
					}
					~Books() // This is a destructor. This is activated when object goes out of scope
					{
							cout << "We are in destructor now" << endl;	
					}
					void setName(string x) // We set the name through public access 
					{
							name = x; 	
					}
					string getName() // We get the name through public access
					{
							return name; 
					}
		private:
					string name; // Here we define a private attribute 'name'

};

int main(){

		Books book1("The stupidity of humans"); // Arg given to initialize the constructor which is automatic
		//book1.setName("The Human");
		cout << book1.getName() << endl; 


		Books book2("Quantum spirituality"); // The second object
		cout << book2.getName() << endl;

		return 0;
}

