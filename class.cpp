
//===================================================
//            Class in c++ (basics) 
//===================================================

#include <iostream>
#include <cstring>

using namespace std; //This includes the standard libraries

class Books{

		public: 

			int ID=256;

			void printmyiD(){
			
					cout << "The ID of the Book is: " << ID << endl;	
			
			}


};


int main(){

		Books book1;
		
		book1.printmyiD();

		cout << book1.ID << endl; // This will print due to public domain

		return 0;

}
