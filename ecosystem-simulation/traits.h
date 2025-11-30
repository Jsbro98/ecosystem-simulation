#ifndef TRAITS_H
#define TRAITS_H

namespace traits {
	struct Fixed {
    int reproductive_rate;
    int decay_rate;
    int sex;
    int vision_radius;

    explicit Fixed(int repro_rate, int decay_rate, int sex, int vision);
    Fixed() = delete;
  };

  struct Dynamic {
    int food;
    int water;
    int sleep;

    explicit Dynamic();
  };
}

#endif  // TRAITS_H