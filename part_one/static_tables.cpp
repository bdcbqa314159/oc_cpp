#include <cstddef>
#include <iostream>

double mean_in_function(double input[], const size_t size);

int main() {

  size_t const nombreNotes = 6;

  double notes[6];

  double initial_note = 12.2;

  for (size_t i = 0; i < nombreNotes; i++) {

    int sign = i % 2 == 0 ? 1 : -1;
    notes[i] = sign * 2.4 + initial_note - i;
  }

  for (size_t i = 0; i < nombreNotes; i++)
    std::cout << "notes[" << i + 1 << "] = " << notes[i] << std::endl;

  double mean_notes = 0;
  for (size_t i = 0; i < nombreNotes; i++)
    mean_notes += notes[i];

  mean_notes /= nombreNotes;

  std::cout << "final mean: " << mean_notes << std::endl;

  std::cout << "final mean via function "
            << mean_in_function(notes, nombreNotes) << std::endl;
}

double mean_in_function(double input[], const size_t size) {

  double out = 0;
  for (size_t i = 0; i < size; i++)
    out += input[i];

  out /= size;

  return out;
}
