#ifndef CELL_H
#define CELL_H

#include "creature.h"
#include <memory>

struct Cell {
  std::unique_ptr<Creature> entity;

  explicit inline Cell() : entity(nullptr) {}
  inline bool is_occupied() const { return entity != nullptr; }
};

#endif  // CELL_H