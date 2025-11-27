#include "grid.h"

Grid::Grid(size_t init_width, size_t init_height)
	: width(init_width), height(init_height), cells(width * height) {}

int& Grid::get_cell(size_t x, size_t y) {
  check_bounds(x, y);
	return cells[index(x, y)]; 
}

const int& Grid::get_cell(size_t x, size_t y) const {
  check_bounds(x, y);
	return cells[index(x, y)]; 
}

void Grid::set_cell(size_t x, size_t y, int value) {
  check_bounds(x, y);
	cells[index(x, y)] = value; 
}