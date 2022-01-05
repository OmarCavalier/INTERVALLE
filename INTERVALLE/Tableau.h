#pragma once
class Tableau
{
public:
	Tableau(int K);
	~Tableau();
	Tableau(const Tableau &F);
	Tableau& operator=(const Tableau& k);
	const float& operator[] (int m);
	void afficher()const;


protected:
	int taille;
	float* Table;
};

