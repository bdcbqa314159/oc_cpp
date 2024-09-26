#pragma once
#include <iostream>
#include <vector>

class Figure {

public:
  virtual void afficher() { std::cout << "je suis une figure\n"; }

  virtual double perimetre() const = 0;
  virtual double aire() const = 0;

  virtual Figure *clone() = 0;

  virtual ~Figure() {}
};

class Carre : public Figure {
public:
  Carre() = default;
  Carre(double cote) : m_cote(cote) {}

  virtual void afficher() override { std::cout << "je suis un carre\n"; }

  virtual double perimetre() const override { return m_cote * 4; }

  virtual double aire() const override { return m_cote * m_cote; }

  virtual Figure *clone() override { return new Carre(*this); }

  virtual ~Carre() {}

private:
  double m_cote{};
};

class Cercle : public Figure {
public:
  Cercle() = default;
  Cercle(double rayon) : m_rayon(rayon) {}

  virtual void afficher() override { std::cout << "je suis un cercle\n"; }

  virtual double perimetre() const override { return 3.14159 * m_rayon; }

  virtual double aire() const override { return 2 * 3.14159 * m_rayon; }

  virtual Figure *clone() override { return new Cercle(*this); }

  virtual ~Cercle() {}

private:
  double m_rayon{};
};

struct Figures {

  Figures() = default;
  std::vector<Figure *> m_figures;

  void ajouter(Figure &fig);

  void afficher() const;

  void enlever();

  ~Figures();
};
