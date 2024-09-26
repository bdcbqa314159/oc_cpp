#pragma once

// #include <utility>
#include <vector>

class Vehicule {
public:
  Vehicule() = default;
  Vehicule(int prix) : m_prix(prix) {}
  virtual void affiche() const;

  // virtual std::shared_ptr<Vehicule> clone()
  // {
  //   return std::make_shared<Vehicule>(*this);
  // }

  virtual int nbrRoues() = 0;

  virtual Vehicule *clone() = 0;

  virtual ~Vehicule();

protected:
  int m_prix{};
};

class Voiture : public Vehicule {
public:
  Voiture() = default;
  Voiture(int prix, int portes) : Vehicule(prix), m_portes(portes) {}
  virtual void affiche() const override;
  // virtual std::shared_ptr<Vehicule> clone()
  // {
  //   return std::make_shared<Voiture>(*this);
  // }
  Vehicule *clone() override { return new Voiture(*this); }

  virtual int nbrRoues() override { return 4; }
  virtual ~Voiture();

private:
  int m_portes{};
};

class Moto : public Vehicule {
public:
  Moto() = default;
  Moto(int prix, double vitesse) : Vehicule(prix), m_vitesse(vitesse) {}
  virtual void affiche() const override;
  // virtual std::shared_ptr<Vehicule> clone()
  // {
  //   return std::make_shared<Moto>(*this);
  // }

  Vehicule *clone() override { return new Moto(*this); }

  virtual int nbrRoues() override { return 2; }
  virtual ~Moto();

private:
  double m_vitesse{};
};

class Camion : public Vehicule {
public:
  Camion() = default;
  Camion(int prix, double poids) : Vehicule(prix), m_poids(poids) {}
  virtual void affiche() const override;
  // virtual std::shared_ptr<Vehicule> clone()
  // {
  //   return std::make_shared<Camion>(*this);
  // }

  Vehicule *clone() override { return new Camion(*this); }
  virtual int nbrRoues() override { return 4; }
  virtual ~Camion();

private:
  double m_poids{};
};

class Garage {

public:
  Garage() = default;

  void ajouter(Vehicule &vehicule);
  void remove();

  void affiche() const;

  ~Garage();

private:
  // std::vector<std::shared_ptr<Vehicule>> m_vehicules;
  std::vector<Vehicule *> m_vehicules;
};

void presenter(Vehicule const &v);
