#pragma once
#include <iostream>

class Fraction {
public:
  Fraction() = default;
  Fraction(int num) : m_numerator(num) {}
  Fraction(int num, int den) : m_numerator(num), m_denominator(den) {}

  Fraction &operator*=(Fraction const &obj);

  void affiche(std::ostream &os) const;

  bool estEgal(Fraction const &obj) const;

private:
  int m_numerator{}, m_denominator{1};
};

std::ostream &operator<<(std::ostream &os, Fraction const &obj);
Fraction operator*(Fraction const &a, Fraction const &b);

bool operator==(Fraction const &a, Fraction const &b);
