#include "timing.hpp"

int nombreDeSeconds(int heures, int minutes, int secondes) {
  int total = 0;
  total = heures * 60 * 60;
  total += minutes * 60;
  total += secondes;
  return total;
}
