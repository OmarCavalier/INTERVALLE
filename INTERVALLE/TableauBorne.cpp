#include "TableauBorne.h"
#include <iostream>
using namespace std;
#include<assert.h>

TableauBorne::TableauBorne(int Q, float maximum, float minimum): Tableau(Q)
{
	this->max = maximum;
	this->min = minimum;
}

TableauBorne::~TableauBorne()
{
	cout << "l'objet a été supprimer" << endl;
}

const float& TableauBorne::operator[](int S)
{
	assert(S >= 0 && S <this->taille);
	return this->Table[S];
}

void TableauBorne::operator()(int J, float D)
{
	if ( J>= 0 && J < this->taille)
	{
		if (D >= this->min && D <= this->max)
		{
			this->Table[J] = D;
		}
	}
}

void TableauBorne::saisir(int T)
{
	float L;
	do
	{
		cout << "Veuillez rentrer la valeur : " << endl;
		cin >> L;
	} while (L < this->min || L > this->max);

		this->Table[T] = L;
	
}


