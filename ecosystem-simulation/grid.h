#ifndef GRID_H
#define GRID_H

#include <vector>

class Grid {
  std::size_t width;
  std::size_t height;
  std::vector<int> cells;

  public:
    Grid(size_t init_width, size_t init_height);
};

#endif  // !GRID_H
