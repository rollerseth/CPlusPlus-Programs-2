/*
#Filename: general.h

#Author: Seth Roller

#Date: 4/4/19

#Program Name: assign9.cpp

#Assignment Number: 9

#Problem: Will be implementing a general tree
in the form of structures and pointers

#Flow: The layout is all the function declarations
with comments

#Sources:
no sources utilized

I have thoroughly tested my code and it works properly 

 */


using namespace std;
struct gennode;
typedef gennode* ptrGenn;

class gennTree
{
public:
// constructors and destructor:
   gennTree();                     // default constructor
   
// stack operations:
   void addNode(bool &Success);
   bool search();
   bool displayChildren();
   bool siblings();
   bool leftSibs();
   bool rightSibs();
   bool displayParent();
   
   
private:
   ptrGenn root; // pointer to the root
   ptrGenn search(int item, bool& Success, ptrGenn node);
};  // end class
// End of header file.

