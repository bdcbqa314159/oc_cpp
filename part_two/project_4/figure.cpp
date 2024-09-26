#include "figure.hpp"
#include <sys/wait.h>

void Figures::ajouter(Figure &fig) { m_figures.push_back(fig.clone()); }

void Figures::enlever() { m_figures.pop_back(); }

void Figures::afficher() const {
  for (size_t i = 0; i < m_figures.size(); ++i)
    m_figures[i]->afficher();
}

Figures::~Figures() {
  for (size_t i = 0; i < m_figures.size(); ++i) {
    delete m_figures[i];
    m_figures[i] = 0;
  }
}
