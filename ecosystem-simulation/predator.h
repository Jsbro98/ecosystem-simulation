#ifndef PREDATOR_H
#define PREDATOR_H

#include "creature.h"
#include <memory>

class Predator : public Creature {
  double attack_damage;

 public:
  explicit Predator();
  void attack();
  void feed();
  std::unique_ptr<Creature> reproduce() override;
};

#endif  // PREDATOR_H