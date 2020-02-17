/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "UserNode.h"
#include "UserList.h"
int
main ()
{



  UserList list;

  // Declare variables
  string FirstName;
  string LastName;
  string Handle;
  long int PhoneNumber;
  int MessageCount;

//User input for menu
  int input;
  int users;
  cout << "Input 0 to quite" << "\n"
	<< "Input 1 to Add info" << "\n"
	<< "Input 2 to find the User with the largest" << "\n"
	<< "Input 3 to Update" << "\n" << "Input 4 to Print" << endl;
  cin >> input;

// while loop to do what is inputed in the menu
  while (input != 0)
    {
      switch (input)
	{
	case 1:
	// asking for input from the user
	  cout << "How many User would like to add?" << endl;
	  cin>>users;
	  for (int i=0; i<users; i++){
	  cout << "First Name: " ;
	  cin >> FirstName;
	  cout << "\n";
	  cout << "LastName: ";
	  cin >> LastName;
	  cout << "\n";
	  cout << "Handle:";
	  cin >> Handle;
	  cout << "\n";
	  cout << "PhoneNumber " ;
	  cin >> PhoneNumber;
	  cout << "\n";
	  cout << "MessageCount ";
	  cin >> MessageCount;
	  cout << "\n";
	  // storing the input in the add method
	  list.Add (FirstName, LastName, Handle, PhoneNumber, MessageCount);
	  }
	  break;
	  // if 2 was inputed it finds the Max message count
	case 2:
	  list.Find ();
	  break;
	  // if 3 was inputed it Update users
	case 3:
	  cout << "Input a FirstName you wanna update (Case sensitive)" <<endl;
	  cout << "FirstName: ";
	  cin >> FirstName;
	  cout << "\n";
	  list.Update (FirstName);
	  cout << "\n";
	  break;
	  	  
	case 4:
	// if 4 was inputed print all
	  list.printAll ();
	  break;
	  
	default:
	// if not any of the asked input print out default
	  cout << "Your input is not right, Pick a choice BETWEEN 0-4" <<endl<<endl;
	}
	//User input for menu
      cout << "Input 0 to quite" << "\n"
	<< "Input 1 to Add info" << "\n"
	<< "Input 2 to find" << "\n"
	<< "Input 3 to Update" << "\n" << "Input 4 to Print" <<endl;
      cin >> input;
    }
// if input is zero do this
  cout << "You just quited" << "\n" << "Thank You" << endl;

  return 0;
}
