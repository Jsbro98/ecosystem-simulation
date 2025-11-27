#include "grid.h"

Grid::Grid(size_t init_width, size_t init_height)
	: width(init_width), height(init_height), cells(width * height) {}

int& Grid::get_cell(size_t x, size_t y) { return cells[y * width + x]; }

const int& Grid::get_cell(size_t x, size_t y) const {
  return cells[y * width + x];
}

void Grid::set_cell(size_t x, size_t y, int value) {
  cells[y * width + x] = value;
}