#include <iostream>
#include"Tableau.h"
#include"TableauBorne.h"
#include <iostream>
using namespace std;

int main()
{
	int taille;
	cout << "veuillez preciser la taille : ";
	cin >> taille;
    TableauBorne A(taille, 14, 6);


	for (int m = 0; m < taille; m++)
	{
		A.saisir(m);
	}

	cout <<"\n The first Value : "<< A[0] << endl;
	A.afficher();
	A(2, 15);
	cout << "\n \nApres la modification on aura :" << endl;
    A.afficher();
	cout << endl;
}

