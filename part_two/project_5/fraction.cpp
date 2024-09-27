#include "fraction.hpp"

void Fraction::affiche(std::ostream &os) const {

  if (m_denominator == 1)
    os << m_numerator;

  else
    os << m_numerator << "/" << m_denominator;
}

std::ostream &operator<<(std::ostream &os, Fraction const &obj) {

  obj.affiche(os);

  return os;
}

Fraction &Fraction::operator*=(Fraction const &obj) {
  m_numerator *= obj.m_numerator;
  m_denominator *= obj.m_denominator;

  return *this;
}

Fraction operator*(Fraction const &a, Fraction const &b) {
  Fraction temp(a);
  temp *= b;
  return temp;
}

bool Fraction::estEgal(Fraction const &obj) const {
  return m_numerator == obj.m_numerator && m_denominator == obj.m_denominator;
}

bool operator==(Fraction const &a, Fraction const &b) { return a.estEgal(b); }
