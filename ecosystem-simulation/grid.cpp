#include "attributes.h"
#include "cell.h"
#include "creature.h"
#include "grid.h"
#include <memory>
#include <utility>

Grid::Grid(size_t init_width, size_t init_height)
	: width(init_width), height(init_height), cells(width * height), active_creatures(100) {}

Cell& Grid::get_cell(size_t x, size_t y) {
  check_bounds(x, y);
	return cells[index(x, y)]; 
}

const Cell& Grid::get_cell(size_t x, size_t y) const {
  check_bounds(x, y);
	return cells[index(x, y)]; 
}

void Grid::set_cell(size_t x, size_t y, std::unique_ptr<Creature> creature) {
  check_bounds(x, y);
  Cell& current_cell{cells[index(x, y)]};
  current_cell.entity = std::move(creature);


  update_position(x, y, current_cell.entity);
}

void Grid::add_to_active_creatures(const std::unique_ptr<Creature>& creature) {
  if (!creature->is_active()) {
    active_creatures.push_back(creature.get());
  }
}

// -------- Helper Grid functions --------

void update_position(size_t x, size_t y, std::unique_ptr<Creature>& creature) {
  Position& creature_pos{creature->get_position()};

  creature_pos.x = x;
  creature_pos.y = y;
}