#include <stdio.h>
#include "Siths.h"
#include <string>
using namespace std;

Siths::Siths(string nomheros, int vieheros, string nomarme, int puissancearme): Heros(nomheros, vieheros, nomarme, puissancearme), m_coteobscur(80) 
{
}
Siths::Siths(string nomheros, int vieheros, string nomarme, int puissancearme,int coteobscur) : Heros(nomheros, vieheros, nomarme, puissancearme), m_coteobscur(coteobscur) 
{
}

void Siths::utiliserLeCoteObscur(Heros &cible)
{
    cout << m_nomheros << "attaque avec une force de " <<m_coteobscur<<endl;
    cible.diminuervie(m_coteobscur);
}

void Siths::afficher() const
{
    Heros::afficher();
    cout << "Niveau de Cote Obscur :" << m_coteobscur <<endl;
}