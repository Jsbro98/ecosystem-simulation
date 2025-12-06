#ifndef CREATURE_H
#define CREATURE_H

#include "attributes.h"
#include "traits.h"

using attributes::Position;
typedef traits::Fixed FixedProperties;
typedef traits::Dynamic DynamicState;

class Creature {
  protected:
    DynamicState dynamic;
    FixedProperties fixed;
    Position position;

  public:
    virtual ~Creature() = default;
    Creature() = delete;

    inline explicit Creature(const FixedProperties& properties)
      : fixed(properties), dynamic(), position() {};
};

#endif  // CREATURE_H