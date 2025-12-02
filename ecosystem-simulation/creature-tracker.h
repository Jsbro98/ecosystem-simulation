#ifndef CREATURE_TRACKER_H
#define CREATURE_TRACKER_H

namespace creature_tracker {
  inline static int total_creatures = 0;
  inline static int plants = 0;
  inline static int herbivores = 0;
  inline static int predators = 0;

  inline void reset() { total_creatures = plants = herbivores = predators = 0;
  }
}

#endif  // CREATURE_TRACKER_H