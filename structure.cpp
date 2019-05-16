

//===================================================
//         Basic data structure 
//         Passing structs to function
//===================================================


#include <iostream>
#include <cstring>  // To include string operations

using namespace std; //This includes the standard libraries


struct Book
{

		char name[50];
		char author[50];
		int id;

};

void print_out(struct Book book)
{

		cout << "Book name: "<< book.name << endl;
		cout << "Book Author: " << book.author << endl;
		cout << "Book ID: " << book.id << endl;

}


int main(){


		struct Book book1;
		
		strcpy(book1.name, "Being badass for no reason"); // A more elegant and efficient way
		strcpy(book1.author, "Thanos");
		book1.id = 6;

		print_out(book1);

		return 0;

}



