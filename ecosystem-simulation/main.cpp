#include "cell.h"
#include "grid.h"
#include <ios>
#include <iostream>

int main() {
  Grid grid{25, 25};
  Cell& cell{grid.get_cell(15, 20)};
  std::cout << std::boolalpha << cell.is_occupied();
}