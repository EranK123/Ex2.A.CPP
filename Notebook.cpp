#include "Notebook.hpp"
#include "Direction.hpp"
using ariel::Direction;

#include <iostream>
#include <stdexcept>
using namespace std;

class ariel::Notebook{
private:
    char ***notebook;
public:

Notebook(){
  
}

void write(int page, int row, int col, Direction dir, string s){
    return;
}
string read(int page, int row, int col, Direction dir, int len){
    return "";
}
void erase(int page, int row, int col, Direction dir, int len){
    return;
}
void show(int page){
    return;
}
};
