#ifndef GRID_H
#define GRID_H

#include <vector>

class Grid {
  std::size_t width;
  std::size_t height;
  std::vector<int> cells;

  private:
    size_t index(size_t x, size_t y) const { return y * width + x; }

  public:
    Grid(size_t init_width, size_t init_height);
    int& get_cell(size_t x, size_t y);
    const int& get_cell(size_t x, size_t y) const;
    void set_cell(size_t x, size_t y, int value);
};

#endif  // !GRID_H
