#pragma once
#include "Tableau.h"
class TableauBorne : public Tableau
{
public:
	TableauBorne(int ,float maximum,float minimum);
	~TableauBorne();
	const float& operator[](int S);
	void operator()(int J,float D);
	void saisir(int T);

private:
	float max, min;

};
