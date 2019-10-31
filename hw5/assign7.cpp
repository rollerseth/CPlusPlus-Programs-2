/*
#Filename: assign7.cpp

#Author: Seth Roller

#Date: 3/26/19

#Program Name: assign7.cpp

#Assignment Number: 7

#Problem: Will be implementing a binary tree through
an array. The traversals for the array will be done
through a stack implmentation

#Flow: The layout the main program will separate
function calls that never edit the binary tree's contents 

#Sources:
No sources used for this file

I have thoroughly tested my code and it works properly 

 */
#include<fstream>
#include<cassert>
#include<iostream>
#include"sbinarytree.h"
#include<string>
#include<math.h>

int main()
{
  //DECLARATIONS
  binarytree theTree; 
  bool theLoop = true;
  int item = 0;
  int option = 0;
  bool result = true;
  
  cout << endl;
  cout << "Name: Seth Roller" << endl;
  cout << "Lab Name: Binary Trees" << endl;
  cout << "Problem: An binary tree has been implemented ";
  cout << endl;
  cout << "so that users can modify the tree's contents." << endl;
  cout << endl;
  
  cout << "1. Add an element to the binary tree" << endl;
  cout << "2. Delete an element from the tree" << endl;
  cout << "3. Display level i of the tree" << endl;
  cout << "4. Inorder traversal" << endl;
  cout << "5. Preorder traversal" << endl;
  cout << "6. Postorder traversal" << endl;
  cout << "7. Print the height of the tree" << endl;
  cout << "8. Print the number of elements in the tree" << endl;
  cout << "9. Is the binary tree full?" << endl;
  cout << "10. Exit the menu loop" << endl << endl;

  while (theLoop) {

    cout << "Enter your option: ";
    cin >> option;
    cout << endl; // for turnin
    
    // checks to see if the entered input is an integer
    if (!cin.good()) {
      cin.clear();
      cin.ignore(120, '\n');
      
      cout << item << " is Invalid input!" << endl << endl;
      cout << endl;
      cout << "Please enter an integer that is between 1 and 10";
      cout << "\n\n";
      
    } // end of if
    
    // goes to check whether the integer entered is valid
    // through a switch case
    
    else {
      cout << "You entered " << option << endl << endl;
      
     // if statement to check if option is in the bounds
      
     if (option >= 1 && option < 10) {
       
       switch (option) {
       case 1:
	 while (true) {
	   cout << "Enter an integer: ";
	   cin >> item;
	   if (cin.good() && item > 0) {
	     theTree.addNode(item, result);
	     cout << endl; // for turnin                                   
	     cout << "You entered " << item << endl << endl;
	     break;
	   }
          cout << endl << endl;
	  cout << "You entered " << item << endl;
          cout << "Invalid input, enter a positive integer";
          cout << endl << endl;
          cin.clear();
          cin.ignore(120, '\n');
	 }
	 if (result == true)
	   cout << item << " was added into the binary tree";
	 cout << "\n\n";
	 break;

       case 2:
	 theTree.deleteNode(item, result);
	 if (result == true) 
	   cout << item << " was deleted from the binary tree\n\n";
	 break;
	 
       case 3:
	 while (true) {
           cout << "Enter an integer: ";
           cin >> item;
           if (cin.good()) {
             cout << endl; // for turnin                                       
             cout << "You entered " << item << endl << endl;
	     theTree.displayLevel(item);
	     cout << endl;
             break;
           }
          cout << endl << endl;
          cout << "Invalid input, enter an integer";
          cout << endl << endl;
          cin.clear();
          cin.ignore(120, '\n');
         }
	 
	 break;

       case 4:
	 theTree.inorder();
	 cout << "\n\n";
	 break;
	 
       case 5:
	 theTree.preorder();
	 cout << "\n\n";
	 break;

       case 6:
	 theTree.postorder();
	 cout << "\n\n";
	 break;
	   
       case 7:
	 item = theTree.height();
	 cout << "The height is " << item << endl << endl;
	 break;

       case 8:
	 item = theTree.howmanyelements();
	 cout << "Number of elements is " << item << endl << endl; 
	 break;

       case 9:
	 if (pow(2, theTree.height())-1 == theTree.howmanyelements() &&
	     theTree.howmanyelements() != 0)
	   cout << "The tree is full" << endl;
	 else
	   cout << "The tree is NOT full" << endl;
	 cout << endl;
	 break;

	 
	  } // end of switch 
     }

     else if (option == 10) {
       theLoop = false;
     }

     else {
       cout << item << " is Invalid Input!" << endl;
       cout << "Please enter an integer that is between 1 and 10";
       cout << endl << endl;
     }

    } // end of 1st else


  }

  return 0;

}//end of main
