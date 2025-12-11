#ifndef HERBIVORE_H
#define HERBIVORE_H

#include "creature.h"
#include <memory>


class Herbivore : public Creature {
  double attack_damage;

  public:
   explicit Herbivore();
   void attack();
   void hide();
   void feed();
   std::unique_ptr<Creature> reproduce();
};

#endif  // HERBIVORE_H