#pragma once

class Duree
{
public:
    Duree() = default;
    Duree(int heures, int minutes, int secondes);

    bool isEqual(Duree const &b) const;
    bool isLessThan(Duree const &b) const;

private:
    int m_heures{}, m_minutes{}, m_secondes{};
};

bool operator==(Duree const &a, Duree const &b);
bool operator!=(Duree const &a, Duree const &b);
bool operator<(Duree const &a, Duree const &b);
bool operator<=(Duree const &a, Duree const &b);
bool operator>(Duree const &a, Duree const &b);
bool operator>=(Duree const &a, Duree const &b);