#include <iostream>
#include <stdexcept>
#include "FamilyTree.hpp"
using namespace std;

 using namespace family;

       
     
     Tree::Tree(string name){
        
     }
     Tree& Tree::addFather(string son, string son_father) {
        Tree *p = this;
         Tree &r=*p;
         return r;
     }  
	Tree& Tree::addMother(string son, string son_mother)  {
         Tree *p = this;
         Tree &r=*p;
         return r;
    } // 

     void Tree:: display(){}
     string Tree::relation(string name){
         return" vb";
     }
     string Tree::find(string name){
         return " xfgcfn";

     }
     Tree& Tree::remove(string s){
          Tree *p = this;
         Tree &r=*p;
         return r;
     }

 