#include "cell.h"
#include "creature.h"
#include "grid.h"
#include <memory>
#include <utility>

Grid::Grid(size_t init_width, size_t init_height)
	: width(init_width), height(init_height), cells(width * height) {}

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
}