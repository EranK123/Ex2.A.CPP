#include "Notebook.hpp"
#include "Direction.hpp"
using ariel::Direction;
#include <iostream>
#include <stdexcept>
using namespace std;  
using namespace ariel;

Notebook::Notebook(){
  
}

void Notebook::write(unsigned int page, unsigned int row, unsigned int col, Direction dir, string const & s){
    
}

string Notebook::read(unsigned int page, unsigned int row, unsigned int col, Direction dir, int len){
    return "";
}

void Notebook::erase(unsigned int page,unsigned int row,unsigned int col, Direction dir, int len){
    
}
void Notebook::show(unsigned int page){
    
}

