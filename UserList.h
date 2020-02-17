#include "UserNode.h"

class UserList
{
private:
 UserNode * Head;
 int Number_user;
 int Total_message;
 
 
 public:
   // Constructors 
   UserList();
   UserList(const UserList & list);
    ~UserList();

   // Methods
 
   void Add(string firstName,string lastName,string handle,long int phoneNumber,int messageCount);
   UserNode* Update(string firstName);
   void Find();
   void printAll() const;
   


};
 // void insertHead(string first_name, string last_name, int score);