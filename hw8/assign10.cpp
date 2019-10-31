/*
#Filename: assign10.cpp

#Author: Seth Roller

#Date: 4/30/19

#Program Name: assign10.cpp

#Assignment Number: 10

#Problem: Will be implementing a graph through a 
series of executions the user can perform

#Flow: The layout the main program will separate
function calls that will add a node or display contents 

#Sources:

I have thoroughly tested my code and it works properly 
Also BFS works

 */

#include "graph.h" 
using namespace std;

int main() 
{ 
  graph theGraph;
  int option = 0;
  bool theLoop = true;
  int item = 0;
  
  while (theLoop) {
    cout << endl;
    cout << "Enter 1 to do DFS\n";
    cout << "Enter 2 to do topological sort\n";
    cout << "Enter 3 to do BFS\n";
    cout << "Enter 4 to exit\n";

    cin >> option;
    
    if (!cin.good()) {
     cin.clear();
     cin.ignore(120, '\n');

     cout << "Invalid input!" << endl << endl;
     cout << endl;
     cout << "Please enter an integer that is between 1 and 4";
     cout << "\n\n";
     
    }
    
    else {
      cout << "You entered " << option << endl << endl;

      if (option > 0 && option < 4) {

	switch(option) {

	case 1:
	  while (true) {
	    cout << "Enter an integer: ";
	    cin >> item;
	    if (cin.good()) {
	      cout << endl;
	      cout << "You entered " << item << endl << endl;
	      theGraph.DFS(item);
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

	case 2:
	  theGraph.topo();
	  break;

	case 3:
	  while (true) {
	    cout << "Enter an integer: ";
	    cin >> item;
            if (cin.good()) {
	      cout << endl;
              cout << "You entered " << item << endl << endl;
              theGraph.BFS(item);
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
	  
	}//end of switch
	
      }//if option is 1, 2, 3

      else if (option == 4) {
	graph newGraph(theGraph);
	newGraph.DFS(0);
	theLoop = false;
      }
      
    }

  } // end of while loop
  
}//end main

