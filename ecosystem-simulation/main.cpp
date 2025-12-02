#include "cell.h"
#include "creature.h"
#include "grid.h"
#include "traits.h"
#include <ios>
#include <iostream>
#include <memory>

int main() {
  Grid grid{25, 25};
  Creature creature{traits::Fixed{5, 5, traits::Sex::Male, 10}};

  grid.set_cell(24, 6, std::make_unique<Creature>(creature));
  std::cout << std::boolalpha << grid.get_cell(24, 6).is_occupied() << '\n';
  std::cout << grid.get_cell(24, 6).entity;
}