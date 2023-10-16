#include <stdio.h>
#include "Robots.h"
#include <string>
using namespace std;

Robots::Robots(string nomheros, int vieheros, string nomarme, int puissancearme): Heros(nomheros, vieheros, nomarme, puissancearme), m_forcegadgets(20) 
{
}
Robots::Robots(string nomheros, int vieheros, string nomarme, int puissancearme,int forcegadgets) : Heros(nomheros, vieheros, nomarme, puissancearme), m_forcegadgets(forcegadgets) 
{
}

void Robots::utiliserLesGadgets(Heros &cible)
{
    cout << m_nomheros << "attaque avec une force de " <<m_forcegadgets<<endl;
    cible.diminuervie(m_forcegadgets);
}

void Robots::afficher() const
{
    Heros::afficher();
    cout << "Force des Gadgets :" << m_forcegadgets <<endl;
}