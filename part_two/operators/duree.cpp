#include "duree.hpp"

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
}

bool Duree::isEqual(Duree const &b) const
{
    return m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes;
}

bool Duree::isLessThan(Duree const &b) const
{
    return m_heures < b.m_heures || (m_heures == b.m_heures && (m_minutes < b.m_minutes || (m_minutes == b.m_minutes && m_secondes < b.m_secondes)));
}

Duree &Duree::operator+=(const Duree &a)
{
    m_heures += a.m_heures;
    m_minutes += a.m_minutes;
    m_secondes += a.m_secondes;
    if (m_secondes >= 60)
    {
        m_secondes -= 60;
        m_minutes++;
    }
    if (m_minutes >= 60)
    {
        m_minutes -= 60;
        m_heures++;
    }
    return *this;
}

void Duree::afficher(std::ostream &out) const
{
    out << m_heures << "h" << m_minutes << "m" << m_secondes << "s";
}

bool operator==(Duree const &a, Duree const &b)
{
    return a.isEqual(b);
}

bool operator!=(Duree const &a, Duree const &b)
{
    return !a.isEqual(b);
}

bool operator<(Duree const &a, Duree const &b)
{
    return a.isLessThan(b);
}

bool operator<=(Duree const &a, Duree const &b)
{
    return a.isLessThan(b) || a.isEqual(b);
}

bool operator>(Duree const &a, Duree const &b)
{
    return !operator<=(a, b);
}

bool operator>=(Duree const &a, Duree const &b)
{
    return !operator<(a, b);
}

Duree operator+(Duree const &a, Duree const b)
{
    Duree result(a);
    result += b;
    return result;
}

std::ostream &operator<<(std::ostream &out, Duree const &duree)
{
    duree.afficher(out);
    return out;
}