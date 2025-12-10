#ifndef ATTRIBUTES_H
#define ATTRIBUTES_H

namespace attributes {
  struct Position {
    size_t x;
    size_t y;

    inline Position() : x(0), y(0) {};
  };
}

#endif  // ATTRIBUTES_H