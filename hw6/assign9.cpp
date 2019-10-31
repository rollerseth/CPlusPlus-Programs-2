/*
#Filename: assign9.cpp

#Author: Seth Roller

#Date: 4/4/19

#Program Name: assign9.cpp

#Assignment Number: 9

#Problem: Will be implementing a general tree through
an structure of pointers

#Flow: The layout the main program will separate
function calls that will add a node or display contents 

#Sources:
No sources used for this file

I have thoroughly tested my code and it works properly 

 */
#include<fstream>
#include<cassert>
#include<iostream>
#include"general.h"
#include<string>
#include<math.h>

int main()
{
  //DECLARATIONS
  gennTree theTree; 
  bool theLoop = true;
  int item = 0;
  int option = 0;
  bool result = true;
  
  cout << endl;
  cout << "Name: Seth Roller" << endl;
  cout << "Lab Name: General Trees" << endl;
  cout << "Problem: An general tree has been implemented ";
  cout << endl;
  cout << "so that users can modify the tree's contents." << endl;
  cout << endl;
  
  cout << "1. Search for an item in the general tree" << endl;
  cout << "2. Display all children of a node" << endl;
  cout << "3. Display all siblings of a node" << endl;
  cout << "4. Display left siblings of a node" << endl;
  cout << "5. Display right siblings of a node" << endl;
  cout << "6. Display the parent of a node" << endl;
  cout << "7. Add a node to the tree" << endl;
  cout << "8. Exit the menu loop" << endl << endl;

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
      cout << "Please enter an integer that is between 1 and 8";
      cout << "\n\n";
      
    } // end of if
    
    // goes to check whether the integer entered is valid
    // through a switch case
    
    else {
      cout << "You entered " << option << endl << endl;
      
     // if statement to check if option is in the bounds
      
     if (option >= 1 && option < 8) {
       
       switch (option) {
       case 1:
	 result = false;
	 result = theTree.search();
	 cout << endl;
	 if (result == true)
	   cout << "Found" << endl;
	 else
	   cout << "Not found" << endl;
	 cout << endl;
	 break;

       case 2:
	 theTree.displayChildren();
	 cout << endl;
	 break;
	 
       case 3:
	 theTree.siblings();
	 break;

       case 4:
	 theTree.leftSibs();
	 break;
	 
       case 5:
	 theTree.rightSibs();
	 break;

       case 6:
	 theTree.displayParent();
	 break;
	   
       case 7:
	 theTree.addNode(result);
	 break;

	  } // end of switch 
     }

     else if (option == 8) {
       theLoop = false;
     }

     else {
       cout << item << " is Invalid Input!" << endl;
       cout << "Please enter an integer that is between 1 and 8";
       cout << endl << endl;
     }

    } // end of 1st else


  }

  return 0;

}//end of main
