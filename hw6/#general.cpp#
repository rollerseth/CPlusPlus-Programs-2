/*
#Filename: general.cpp

#Author: Seth Roller

#Date: 4/4/19

#Program Name: assign9.cpp

#Assignment Number: 9

#Problem: Will be implementing a general tree 
in the form of a structures and pointers

#Flow: The layout is all the functions filled in.
The functions will be utilized in the main program 

#Sources:
no sources utilized

I have thoroughly tested my code and it works properly 

 */
#include <stddef.h>  // for NULL
#include <iostream>
#include "general.h"

struct gennode {
  int item;
  gennode * firstchild;
  gennode * siblinglist;
  gennode * prevsibling;
  gennode * parent;
};

gennTree::gennTree()
{
  int add = 0;
  bool contin = true;
  string answer = "";
  cout << endl;
  cout << "Process for creating a general tree has started." << endl;
  
  //start while loop that asks for root
  
  while (true) {
    cout << "Please enter the root value: ";
    cin >> add;
    if (cin.good() && add > 0) {
      root->item = add;
      root->parent = NULL;
      root->siblinglist = NULL;
      root->firstchild = NULL;
      root->prevsibling = NULL;
      cout << endl; // for turnin                                        
      cout << "You entered " << add << endl << endl;
      break;
  }
    cout << endl << endl;
    cout << "You entered " << add << endl;
    cout << "Invalid input, enter an integer";
    cout << endl << endl;
    cin.clear();
    cin.ignore(120, '\n');
  }

  //loop for asking whether to add node
  while (contin) {
    cout << endl;
    cout << "If you'd like to add another node type y for yes" << endl;
    cout << "and n for no, then press enter: ";
    cin >> answer;
    if (cin.good()) {
      cout << endl;
      if (answer == "y") 
	addNode(contin);
      else 
	contin = false;
   
    }
    else {
      cout << endl << endl;
      cout << "You entered " << answer << endl;
      cout << "Invalid input, y or n";
      cout << endl << endl;
      cin.clear();
      cin.ignore(120, '\n');
    }
  } // end of 2nd while

}  // end default constructor


void gennTree::addNode(bool& Success)
{

  ptrGenn parentt = NULL;
  bool answer = false;
  int add = 0;
  cout << endl;
  cout << "Please enter an integer for the parent of element to be ";
  cout << "inserted: ";
  cin >> add;
  //search for the parent
  parentt = search(add, answer, root);
  if (cin.good() && answer == true) {
    //if the parent is valid
    cout << endl;
    cout << "You entered " << add << endl;
    cout << endl; // for turnin                    

    while (true) {
      //asking them for a unique integer
      cout << "Please enter an unique integer to add: ";
      cin >> add;
      answer = false;
      search(add, answer, root);
      if (cin.good() && answer == false) {
	cout << endl;
	cout << "You entered " << add << endl;
	cout << endl; // for turnin
	
	//if the parent does not have children
	if (parentt->firstchild == NULL) {
	  gennode *newNode = new gennode;
	  newNode->item = add;
	  newNode->parent = parentt;
	  newNode->prevsibling = NULL;
	  newNode->siblinglist = NULL;
	  newNode->firstchild = NULL;
	  parentt->firstchild = newNode;
	}

	//if the parent does have children
	else {
	  ptrGenn child = parentt->firstchild;
	  gennode *newNode = new gennode;
	  while (child->siblinglist != NULL) 
	    child = child->siblinglist;
	  newNode->item = add;
	  newNode->prevsibling = child;
	  newNode->parent = parentt;
	  newNode->siblinglist = NULL;
	  newNode->firstchild = NULL;
	  child->siblinglist = newNode;
	}
	break;
      }
      cout << endl << endl;
      cout << "You entered " << add << endl;
      cout << "Invalid input, enter an integer that is not in the tree";
      cout << endl << endl;
      cin.clear();
      cin.ignore(120, '\n');
      
    } //end of while true
    
  } //end of first if

  else {
    //if the parent does not exist
    cout << endl;
    cout << "You entered " << add << endl;
    cout << "You must enter a valid integer already in the tree!" << endl;
    Success = false;
  }
  
} // end of addNode

ptrGenn gennTree::search(int item, bool& Success, ptrGenn node)
{
  //everytime a bool is sent to this search
  //it will be false, and will only become
  //true if the node being searched for
  //is in the tree
  
  //check if the node is null
  if (node == NULL) 
    return node;

  //check if the node is the answer
  if (node->item == item) {
    Success = true;
    return node;
  }

  
  //check the siblings first
  if (search(item, Success, node->siblinglist) != NULL)
    return search(item, Success, node->siblinglist);

  //then check the first child
  
  return search(item, Success, node->firstchild);
  
}//end of private search



bool gennTree::search()
{
  int num = 0;
  //set bool to false, refer to private search for
  //explanation
  bool Success = false;
  while (true) {
    cout << endl;
    cout << "Please enter an integer to be searched:  ";
    cin >> num;
    if (cin.good()) {
      cout << endl;
      cout << "You are searching for " << num << endl;
      search(num, Success, root);
      break;
    }
    cout << endl << endl;
    cout << "You entered " << num << endl;
    cout << "Invalid input, enter an integer";
    cout << endl << endl;
    cin.clear();
    cin.ignore(120, '\n');
    
  } //end of while
  
  return Success;

}//end of public search


bool gennTree::displayChildren()
{
  int num = 0;
  cout << "Please enter an integer to display its children:  ";
  cin >> num;
  ptrGenn temp = NULL;
  bool Success = false;
  if (cin.good()) {
    cout << endl << "You entered " << num << endl;
    temp = search(num, Success, root);
  }
  //if the node is found
  if (Success == true) {

    if (temp->firstchild != NULL) {
      cout << endl;
      cout << "The children for " <<num<<" are as follows:" << endl;
      temp = temp->firstchild;
      while (temp != NULL) {
	cout << temp->item << endl;
        temp = temp->siblinglist;
      }

      return true;
    }

    else {
      cout << endl;
      cout << "There are no children for " <<num<< endl;
      cout << endl;
      return true;
    }

  }

  else {
    cout << endl;
    cout << "The integer " <<num<<" was not found" << endl;
    Success = false;
    return Success;
  }

    
}//end of children

bool gennTree::displayParent()
{
  int num = 0;
  cout << endl;
  cout << "Please enter an integer to display its parent:  ";
  cin >> num;
  ptrGenn temp = NULL;
  bool Success = false;
  if (cin.good()) {
    cout << endl << "You entered " << num << endl;
    temp = search(num, Success, root);
  }
  //if the node is found and they have a parent
  if (Success == true && temp->parent != NULL) {
    cout << endl;
    cout << "The parent of " << num;
    cout << " is " << temp->parent->item << endl;
    cout << endl;
    return true;
  }
  
  else {
    //if they entered the root or the integer searched for
    //does not exist
    if (root->item == num) {
      cout << endl;
      cout << "The root has no parent\n" << endl;
      Success = true;
      return Success;
    }
    else {
      cout << endl;
      cout << "The integer " <<num<<" was not found\n" << endl;
      Success = false;
      return Success;
    }
  }

}//end of parents

bool gennTree::siblings()
{
  int num = 0;
  cout << "Please enter an integer to display its siblings:  ";
  cin >> num;
  ptrGenn temp = NULL;
  ptrGenn temp1 = NULL;
  bool Success = false;
  if (cin.good()) {
    cout << endl << "You entered " << num << endl;
    temp = search(num, Success, root);
    temp1 = temp;
  }
  //if the node is found
  if (Success == true) {

    cout << "The siblings for "<<num<<" are as follows:" << endl;
    if (temp->prevsibling != NULL) {
      cout << endl;
      temp = temp->prevsibling;
      while (temp != NULL) {
	cout << temp->item << endl;
	temp = temp->prevsibling;
      }
      Success = false;
    }
    
    if (temp1->siblinglist != NULL) {
      temp1 = temp1->siblinglist;
      while (temp1 != NULL) {
	cout << temp1->item << endl;
	temp1 = temp1->siblinglist;
      }
      cout << endl;
      Success = false;
    }

    if (Success == true) {
      cout << endl;
      cout << "There are no siblings for " <<num<< endl << endl;
    }
    return true;
  }

  else {
    cout << endl;
    cout << "The integer "<<num<<" was not found" << endl;
    Success = false;
    return Success; 
  }
} // end of siblings

bool gennTree::leftSibs() 
{
  int num = 0;
  cout << endl;
  cout << "Please enter an integer to display its left siblings:  ";
  cin >> num;
  ptrGenn temp = NULL;
  bool Success = false;
  if (cin.good()) {
    cout << endl << "You entered " << num << endl;
    temp = search(num, Success, root);
  }
  //if the node is found
  if (Success == true) {

    if (temp->prevsibling != NULL) {
      cout << endl;
      cout << "The left siblings for "<<num<<" are as follows:\n";
      temp = temp->prevsibling;
      while (temp != NULL) {
        cout << temp->item << endl;
	temp = temp->prevsibling;
      }
      cout << endl;
      return true;
    }

    else {
      cout << endl << endl;
      cout << "There are no left siblings for the node " << temp->item;
      cout << endl << endl;
      return true;
    }

  }

  else {
    cout << endl;
    cout << "The integer " <<num<< " was not found" << endl;
    Success = false;
    return Success;
  }
      
} // end of leftsibs

bool gennTree::rightSibs()
{
  int num = 0;
  cout << endl;
  cout << "Please enter an integer to display its right siblings:  ";
  cin >> num;
  ptrGenn temp = NULL;
  bool Success = false;
  if (cin.good()) {
    cout << endl << "You entered " << num << endl;
    temp = search(num, Success, root);
  }
  //if the node is found
  if (Success == true) {

    if (temp->siblinglist != NULL) {
      cout << endl;
      cout << "The right siblings for "<<num<<" are as follows:\n";
      temp = temp->siblinglist;
      while (temp != NULL) {
	cout << temp->item << endl;
	temp = temp->siblinglist;
      }
      cout << endl;
      return true;
    }
    
    else {
      cout << endl;
      cout << "There are no right siblings for the node " << temp->item;
      cout << endl << endl;
      return true;
    }
    
  }

  else {
    cout << endl << endl;
    cout << "The integer " <<num<< " was not found" << endl;
    Success = false;
    return Success; 
  }

} //end of siblings
