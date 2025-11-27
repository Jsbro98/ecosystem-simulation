#ifndef CELL_H
#define CELL_H

struct Cell {
  int value;
  bool occupied;

  explicit inline Cell() : value(0), occupied(false) {}
};

#endif  // CELL_H