#pragma once

#include<stdio.h>
#include<iostream>
#include<string>

class ClPoint
{
	
private:
	float X;
	float Y;

	static int comptP;

public:

	//Constructeur
	ClPoint(float val_x, float val_y);

	//Mouvement
	void deplacement(float calc_x, float calc_y);

	//affichage
	void affichage();

	//abscisse et ordonnée
	void abscisse();
	void ordonnee();

	//Get
	float getX();
	float getY();

	//Set
	void setX(float n_val);
	void setY(float n_val);
	
};