#include "grid.h"
#include <iostream>

int main() {
  Grid grid{50, 50};
  grid.set_cell(15, 25, 100);
  std::cout << grid.get_cell(15, 25) << std::endl;
}