#include <string>
#include "Direction.hpp"
namespace ariel{
class Notebook{
private:
// char ***notebook;
public:
    Notebook();
    void write(unsigned int page, unsigned int row, unsigned int col, Direction dir, std::string const & s);
    static std::string read(unsigned int page, unsigned int row, unsigned int col, Direction dir, int len);
    void erase(unsigned int page, unsigned int row, unsigned int col, Direction dir, int len);
    void show(unsigned int page);
};
}