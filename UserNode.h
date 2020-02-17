

#ifndef UserNode_H
#define UserNode_H
#include "UserNode.h"
#include <string>
#include <iostream>

using namespace std;
class UserNode{
private:
   string FirstName;
   string LastName;
   string Handle;
   long int PhoneNumber;
   int MessageCount;
   UserNode *Next;
    
	
public:
// Constructors
UserNode();
UserNode(string firstName,string lastName,string handle,long int phoneNumber,int messageCount);
UserNode(const UserNode & userNode);
~UserNode();
   // Methods
   string getFirstName() const;
   string getLastName() const;
   string getHandle() const;
   long int getPhoneNumber() const;
   int getMessageCount() const;
   UserNode *getNext() const;
   
   
   // setters
   void setFirstName(string first_Name);
   void setLastName(string last_Name);
   void setHandle(string handle1);
   void setPhoneNumber(long int phone_Number);
   void setMessageCount(int message_Count);
   void setNext(UserNode *next);
   void print() const;
};
#endif
