#include "Tableau.h"
#include <iostream>
#include<assert.h>
using namespace std;

Tableau::Tableau(int K)
{
	this->taille = K;
	this->Table = new float[K];
}

Tableau::~Tableau()
{
	delete[] this->Table;
	this->Table = 0;
	cout << "l'objet a été supprimer " << endl;
}

Tableau::Tableau(const Tableau& F)
{
	this->taille = F.taille;
	this->Table = new float[F.taille];
	for (int p = 0; p < F.taille; p++)
	{
		this->Table[p] = F.Table[p];
	}
}

Tableau& Tableau::operator=(const Tableau& k)
{
	if (this != &k) {
		delete[] this->Table;
		this->Table = 0;
		this->Table = new float[k.taille];
		for (int r = 0; r < k.taille; r++)
		{
			this->Table[r] = k.Table[r];
		}
	}
	return *this;
}

const float& Tableau::operator[](int m)
{
	assert(m >= 0 && m < this->taille);

	return this->Table[m];
}

void Tableau::afficher() const
{
	for (int b = 0; b < this->taille; b++)
	{
		cout << " | " << this->Table[b] << " | ";
	}
}
