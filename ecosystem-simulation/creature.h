#ifndef CREATURE_H
#define CREATURE_H

#include "attributes.h"
#include "traits.h"
#include <memory>

using attributes::Position;
typedef traits::Fixed FixedProperties;
typedef traits::Dynamic DynamicState;

class Creature {
 protected:
  DynamicState dynamic;
  FixedProperties fixed;
  Position position;
  bool active;

 public:
  virtual ~Creature() = default;
  Creature() = delete;

  inline explicit Creature(const FixedProperties& properties)
      : fixed(properties), dynamic(), position(), active(false) {};

  inline Position& get_position() { return position; };
  inline bool is_active() const { return active; };
  virtual std::unique_ptr<Creature> reproduce();
};

#endif  // CREATURE_H