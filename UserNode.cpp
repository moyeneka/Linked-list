#include "UserNode.h"
#include <string>
#include <iostream>


using namespace std;
//constructor
UserNode::UserNode ()
{
  FirstName = "";
  LastName = "";
  Handle = "";
  PhoneNumber = 0;
  MessageCount = 0;
  Next = NULL;
}

//copy constructor

UserNode::UserNode (string firstName, string lastName, string handle,
		    long int phoneNumber, int messageCount)
{
  FirstName = firstName;
  LastName = lastName;
  Handle = handle;
  PhoneNumber = phoneNumber;
  MessageCount = messageCount;
  Next = NULL;
}

UserNode::UserNode (const UserNode & userNode)
{
  FirstName = userNode.FirstName;
  LastName = userNode.LastName;
  Handle = userNode.Handle;
  PhoneNumber = userNode.PhoneNumber;
  MessageCount = userNode.MessageCount;
  Next = userNode.Next;
}

//----------------------------------------------
//Destructor
UserNode::~UserNode ()
{
}

   // Methods
string UserNode::getFirstName () const
{
  return FirstName;
}

string UserNode::getLastName () const
{
  return LastName;
}

string UserNode::getHandle () const 
{
  return Handle;
}

long int UserNode::getPhoneNumber () const 
{
  return PhoneNumber;
}

int
UserNode::getMessageCount () const 
{
  return MessageCount;
}

UserNode * UserNode::getNext () const 
{
  return Next;
}



   // setters
void UserNode::setFirstName (string first_Name)
{
  FirstName = first_Name;
}

void UserNode::setLastName (string last_Name)
{
  LastName = last_Name;
}

void UserNode::setHandle (string handle1)
{
  Handle = handle1;
}

void UserNode::setPhoneNumber (long int phone_Number)
{
  PhoneNumber = phone_Number;
}

void UserNode::setMessageCount (int message_Count)
{
  MessageCount = message_Count;
}

void UserNode::setNext (UserNode * next)
{
  Next = next;
}


//----------------------------------------------
void UserNode::print () const
{
  cout << "Name: " << FirstName << "\n"
    << "LastName: " << LastName << "\n" << "Handle:" << Handle << "\n" <<
    "PhoneNumber " << PhoneNumber << "\n" << "MessageCount " << MessageCount
    << "\n"<<endl;
}
