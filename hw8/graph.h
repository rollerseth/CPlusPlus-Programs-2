/*
#Filename: graph.h

#Author: Seth Roller

#Date: 4/30/19

#Program Name: assign10.cpp

#Assignment Number: 10

#Problem: Will create a graph through an
allocated array of pointers which represent
an adjacency list for vertices

#Flow: The layout is all the function declarations
with comments

#Sources:

I have thoroughly tested my code and it works properly 
Also BFS works

 */

#include<cassert>
#include<iostream>
#include<string>
#include<fstream>
#define MAX 100

struct graphNode;
typedef graphNode* graphPtr;

using namespace std;

class graph
{
  public:
  
  graph();
  graph(const graph& theGraph); 
  ~graph();
  // operations
  bool DFS(int v); 
  bool BFS(int v);
  void topo();
  

  private:
  void DFS_visit(int v, int visiting[]);
  graphPtr theArray[MAX];
  int vertices;
  
  //linked list for topo
  graphPtr headTopo;
  bool cycle;
  
};
