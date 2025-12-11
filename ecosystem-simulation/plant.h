#ifndef PLANT_H
#define PLANT_H

#include "creature.h"
#include <memory>

class Plant : public Creature {
  double energy_value;

  public:
    explicit Plant();
    void grow();
    std::unique_ptr<Creature> reproduce() override;
};


#endif  // PLANT_H