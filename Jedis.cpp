#include <stdio.h>
#include "Jedis.h"
#include <string>
using namespace std;

Jedis::Jedis(string nomheros, int vieheros, string nomarme, int puissancearme): Heros(nomheros, vieheros, nomarme, puissancearme), m_force(100) // Constructeur avec les attributs du Heros à déterminer et m_force a 100
{
}
Jedis::Jedis(string nomheros, int vieheros, string nomarme, int puissancearme, int force) : Heros(nomheros, vieheros, nomarme, puissancearme), m_force (force) // Constructeur avec tous les attributs à déterminer
{
}

void Jedis::utiliserLaForce(Heros &cible)
{
    cout << m_nomheros << "attaque avec une force de " <<m_force<<endl;
    cible.diminuervie(m_force);
}

void Jedis::afficher() const
{
    Heros::afficher();
    cout << "Niveau de Force :" << m_force <<endl;
}