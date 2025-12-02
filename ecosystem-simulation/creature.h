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
    Creature() = delete;

    inline explicit Creature(const FixedProperties& properties) : fixed(properties), dynamic() {};
};

#endif  // CREATURE_H