/*
#Filename: sbinarytree.h

#Author: Seth Roller

#Date: 3/26/19

#Program Name: assign7.cpp

#Assignment Number: 7

#Problem: Will be implementing a binary tree
in the form of an array

#Flow: The layout is all the function declarations
with comments

#Sources:
No sources used for this file

I have thoroughly tested my code and it works properly 

 */

using namespace std;
#define MAX 100
#include "BTstack.h"

class binarytree
{
public:
// constructors and destructor:
   binarytree();                     // default constructor
   
// stack operations:
   void addNode(int item, bool &Success);
   void deleteNode(int &item, bool &Success);
   void displayLevel(int level) const;
   void inorder();
   void postorder() const;
   void preorder() const;
   int height() const;
   int howmanyelements() const; 

 private:
   int theArray[MAX]; // pointer to a BTnode that is the top
   int numberofelements;
   int BTheight;
};  // end class
// End of header file.
