#ifndef TRAITS_H
#define TRAITS_H

namespace traits {
  enum class Sex { Male, Female };

  struct Fixed {
    int reproductive_rate;
    int decay_rate;
    Sex sex;
    int vision_radius;

    inline explicit Fixed(int repro_rate, int decay_rate, Sex sex, int vision)
        : reproductive_rate(repro_rate),
          decay_rate(decay_rate),
          sex(sex),
          vision_radius(vision) {};
    Fixed() = delete;
  };

  struct Dynamic {
    int food;
    int water;
    int sleep;

    inline explicit Dynamic() : food(100), water(100), sleep(100) {};
  };
}

#endif  // TRAITS_H