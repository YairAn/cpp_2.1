#include <iostream>
#include <stdexcept>
using namespace std;

 namespace family{

class Tree {       // The class
  public:   
     Tree(string name);
     Tree& addFather(string son, string son_father)  ; // 
	   Tree& addMother(string son, string son_mother)  ; // 
     void display();
     string relation(string name);
     string find(string name);
     Tree& remove(string s);
};
 }