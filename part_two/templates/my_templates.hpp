#pragma once
#include <string>

template <typename T> T my_max_function(const T &a, const T &b) {
  if (a > b)
    return a;
  return b;
}

template <>
std::string my_max_function(const std::string &a, const std::string &b);

template <typename T, typename S> S moyenne(T tableau[], int taille) {
  S somme(0);
  for (int i(0); i < taille; ++i)
    somme += tableau[i];

  return somme / taille;
}

template <typename T> class Rectangle {

public:
  Rectangle(T gauche, T droite, T haut, T bas)
      : m_gauche(gauche), m_droite(droite), m_haut(haut), m_bas(bas) {}
  T hauteur() const;
  bool estContenu(T x, T y) const;

private:
  T m_gauche{}, m_droite{}, m_haut{}, m_bas{};
};

template <typename T> T Rectangle<T>::hauteur() const { return m_haut - m_bas; }

template <typename T> bool Rectangle<T>::estContenu(T x, T y) const {
  return (x >= m_gauche) && (x <= m_droite) && (y >= m_bas) && (y <= m_haut);
}
