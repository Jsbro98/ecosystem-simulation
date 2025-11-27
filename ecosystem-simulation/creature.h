#ifndef CREATURE_H
#define CREATURE_H

class Creature {
 public:
  struct Stats {
    int reproductive_rate;
    int decay_rate;
    int sex;
    int vision_radius;
    int food;
    int water;
    int sleep;
  };

  protected:
    Stats stats;

  public:
    virtual ~Creature() = default;
};

#endif  // CREATURE_H