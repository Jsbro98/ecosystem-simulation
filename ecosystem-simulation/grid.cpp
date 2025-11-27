#include "grid.h"

Grid::Grid(size_t init_width, size_t init_height)
	: width(init_width), height(init_height), cells(width * height) {}