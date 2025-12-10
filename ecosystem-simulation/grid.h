#ifndef GRID_H
#define GRID_H

#include "cell.h"
#include "creature.h"
#include <memory>
#include <stdexcept>
#include <vector>

class Grid {
  std::size_t width;
  std::size_t height;
  std::vector<Cell> cells;
  std::vector<Creature*> active_creatures;

  private:
    inline size_t index(size_t x, size_t y) const { return y * width + x; }
    inline void check_bounds(size_t x, size_t y) const {
      if (x >= width || y >= height) {
        throw std::out_of_range("x or y value is out of bounds");
      }
    }

  public:
    explicit Grid(size_t init_width, size_t init_height);
    Cell& get_cell(size_t x, size_t y);
    const Cell& get_cell(size_t x, size_t y) const;
    void set_cell(size_t x, size_t y, std::unique_ptr<Creature> creature);
    void add_to_active_creatures(const std::unique_ptr<Creature>& creature);
};

// --- Function declarations ---

void update_position(size_t x, size_t y, std::unique_ptr<Creature>& creature);

#endif  // GRID_H
