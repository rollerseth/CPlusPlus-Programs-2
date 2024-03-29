/*
#Filename: huffman.h

#Author: Seth Roller

#Date: 5/2/19

#Program Name: huffmancode.cpp

#Assignment Number: 11

#Problem: Will be implementing a priority queue (heap) through
an array and then create huffman's binary tree also a 
compression/decompression algorithm

#Flow: The layout is all the function declarations
with comments

#Sources:
no sources utilized

I have thoroughly tested my code and it works properly 

 */

#include<cassert>
#include<iostream>
#include<string>
#include<fstream>
#include "PQHeap.h"
using namespace std;

struct item {
string compress;
int length;
};

class huffman
{
  public:
  
  huffman(string fn);
  ~huffman();
  // operations
  void displayCode(); 
  void compressdecompress(string compress, string decompress);
  

  private:
 
  void inOrder(string s, huffmannode *t) ;
  
  string inputFile;
  huffmannode * finalhuffmantree;
  int numChars;
  //created a array to hold the structs
  item *compressed[26];


};
