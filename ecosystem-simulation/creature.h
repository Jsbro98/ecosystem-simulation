#ifndef CREATURE_H
#define CREATURE_H

#include "traits.h"

typedef traits::Fixed FixedProperties;
typedef traits::Dynamic DynamicState;

class Creature {
  protected:
    DynamicState dynamic;
    FixedProperties fixed;

  public:
    virtual ~Creature() = default;
    Creature(const FixedProperties& properties);
};

#endif  // CREATURE_H