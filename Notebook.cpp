#include "Notebook.hpp"
#include "Direction.hpp"
using ariel::Direction;
#include <iostream>
#include <stdexcept>
using namespace std;
using namespace ariel;

Notebook::Notebook(){
  
}

void Notebook::write(int page, int row, int col, Direction dir, std::string s){
    return;
}

string Notebook::read(int page, int row, int col, Direction dir, int len){
    return "";
}

void Notebook::erase(int page, int row, int col, Direction dir, int len){
    return;
}
void Notebook::show(int page){
    return;
}

