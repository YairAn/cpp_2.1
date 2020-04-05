#include <iostream>
#include <stdexcept>
using namespace std;



class Node 
{ 
    public:
    string name;
      
   Node* Mother, *Father; 
  
  Node(string data) 
{ 

    this->name = data;
    this->Mother = this->Father = NULL; 
}; 
  

};