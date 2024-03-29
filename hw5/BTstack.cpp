/*
#Filename: BTstack.cpp

#Author: Seth Roller

#Date: 3/26/19

#Program Name: assign7.cpp

#Assignment Number: 7

#Problem: Will be implementing a binary tree 
in the form of a stack

#Flow: The layout is all the functions filled in.
The functions will be utilized in the main program 

#Sources:
Dr. Bracken informed me to pass bitems in 
my push and pop function as parameters

I have thoroughly tested my code and it works properly 

 */
#include <stddef.h>  // for NULL
#include <iostream>
#include "BTstack.h"


BTstack::BTstack()  
{
  top = NULL;  
}  // end default constructor



BTstack::~BTstack()
{
  
  bool result = true;
  bitem itemReturn;
  itemReturn.treeindex = 0;
  itemReturn.treeitem = 0;
  if (top != NULL) {
    while (result == true) {
      popBTstack(itemReturn, result);
      
    }
  }
  

}  // end destructor

void BTstack::pushBTstack(bitem node, bool &Success)
{
  //declar a new bitem

  BTnode *adding = new BTnode;
  adding->current.treeindex = node.treeindex;
  adding->current.treeitem = node.treeitem;

  if (top == NULL) {
    adding->below = NULL;
    top = adding;
  }

  else {
    adding->below = top;
    top = adding;
  }

  Success = true;

}

void BTstack::popBTstack(bitem &node, bool &Success)
{
  if (top == NULL) {
    Success = false;
  }

  //this is all cases when top != NULL
  else {
    node.treeitem = top->current.treeitem;
    node.treeindex = top->current.treeindex;
    ptrBitem temp = top->below;
    delete top;
    top = temp;
    Success = true;
  }


}

void BTstack::BTPrint() const
{
  if (top != NULL) {
    ptrBitem traverse = top;
    cout << traverse->current.treeitem << " ";
    while (traverse->below != NULL) {
      traverse = traverse->below;
      cout << traverse->current.treeitem << " ";
    } // end of while

    cout << endl;
    
  } // end of if

  else
    cout << "The stack is empty" << endl;

}




