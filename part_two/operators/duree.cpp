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
