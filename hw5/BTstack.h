/*
#Filename: BTstack.h

#Author: Seth Roller

#Date: 3/26/19

#Program Name: assign7.cpp

#Assignment Number: 7

#Problem: Will be implementing a binary tree
in the form of a stack

#Flow: The layout is all the function declarations
with comments

#Sources:
Dr. Bracken informed me to pass bitems in 
my push and pop function as parameters

I have thoroughly tested my code and it works properly 

 */


using namespace std;
struct bitem;
struct BTnode;
typedef BTnode* ptrBitem;

struct bitem {
  int treeindex;
  int treeitem;
};

struct BTnode {
  struct bitem current;
  ptrBitem below;
};

class BTstack
{
public:
// constructors and destructor:
   BTstack();                     // default constructor
   ~BTstack();                    // destructor
   
// stack operations:
   void pushBTstack(bitem node, bool &Success);
   void popBTstack(bitem &node, bool &Success);
   void BTPrint() const;

private:
   ptrBitem top; // pointer to a BTnode that is the top

};  // end class
// End of header file.

