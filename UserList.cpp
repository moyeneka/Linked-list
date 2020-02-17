
#include "UserNode.h"
#include "UserList.h"
#include <string>
#include <iostream>

// Constructors
UserList::UserList ()
{
  Head = NULL;
  Number_user = 0;
  Total_message = 0;
}
 
// copy Constructors
UserList::UserList (const UserList & n)
{
  Head = n.Head;
  Number_user = n.Number_user;
  Total_message = n.Total_message;
}

	// Destructors
UserList::~UserList ()
{
    //empty
}

void UserList::Add (string firstName, string lastName, string handle,long int phoneNumber, int messageCount)
{
  // ADD tail node
  Number_user++;
  Total_message += messageCount;

  UserNode *ptr = Head;
  while ((ptr != NULL) && (ptr->getNext () != NULL))
    ptr = ptr->getNext ();

  // Insert new node
  if (ptr != NULL)
    {
      ptr->setNext (new UserNode(firstName, lastName, handle, phoneNumber,messageCount));

    }
  else
    Head =new UserNode (firstName, lastName, handle, phoneNumber, messageCount);

}

	//--------------------------------------------------------------------------------
UserNode * UserList::Update (string first_name)
{
  // Find matching node
  UserNode *ptr = Head;
   if (ptr == NULL){
     cout << "User Not found" << endl;
     cout <<"Please Input the correct spelling of the Name or add user information"<< endl;
    }else
    {
  while ((ptr != NULL) && (ptr->getFirstName () != first_name))
    {
      ptr = ptr->getNext ();

    }
     }
  // if pointer is not null Add to current message Count
  if (ptr != NULL)
    {
      ptr->setMessageCount (1 + ptr->getMessageCount ());
      Total_message++;
      ptr->print ();
      return ptr;
    }
  else
    {
      return NULL;
    }
}

	 //---------------------------------------------------------------------------------
void UserList::Find ()
{
  UserNode *ptr = Head;
  UserNode *FINDMAX = Head;
  // find max while the pointer is not null
  while (ptr != NULL)
    {
      if (ptr->getMessageCount () > FINDMAX->getMessageCount ())
	FINDMAX = ptr;
      ptr = ptr->getNext ();
    }
    //print out the max at that location
  if (FINDMAX != NULL)
    {

      FINDMAX->print ();
    }
  else
    cout << "User Not found" << endl;

}


//---------------------------------------------------------------------------------     
void UserList::printAll () const
{
  UserNode *ptr = Head;
  if (ptr == NULL)
    {
      cout << "Nothing to print out, Please type 1 to add Users" << endl<<endl;
    }
  else
    {
      while (ptr != NULL)
	  {
	  ptr->print ();
	  ptr = ptr->getNext ();
	   }
    }

  cout << "Total message:" << Total_message << endl;
  cout << "Number users:" << Number_user << endl;
}
