#ifndef GRID_H
#define GRID_H

#include <stdexcept>
#include <vector>

class Grid {
  std::size_t width;
  std::size_t height;
  std::vector<int> cells;

  private:
    inline size_t index(size_t x, size_t y) const { return y * width + x; }
    inline void check_bounds(size_t x, size_t y) const {
      if (x >= width || y >= height) {
        throw std::out_of_range("x or y value is out of bounds");
      }
    }

  public:
    explicit Grid(size_t init_width, size_t init_height);
    int& get_cell(size_t x, size_t y);
    const int& get_cell(size_t x, size_t y) const;
    void set_cell(size_t x, size_t y, int value);
};

#endif  // GRID_H
