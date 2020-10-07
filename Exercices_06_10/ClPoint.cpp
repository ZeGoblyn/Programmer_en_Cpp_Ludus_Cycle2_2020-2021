#include<stdio.h>
#include<iostream>
#include<string>
#include"ClPoint.h"
#include <math.h>

int ClPoint::comptP = 0;

ClPoint::ClPoint(float val_x, float val_y)
{
	this->X = val_x;
	this->Y = val_y;

	comptP++;
}

void ClPoint::deplacement(float calc_x, float calc_y)
{
	this->X = this->X + calc_x;
	this->Y = this->Y + calc_y;
}

void ClPoint::affichage()
{
	std::cout << "Les coordonnees X du point" << std::endl;
	std::cout << getX() << std::endl;
	std::cout << "Les coordonnees Y du point" << std::endl;
	std::cout << getY() << std::endl;
	std::cout << "Le nombre de d'objet de type 'point' est de" << comptP << std::endl;

}

//Abscisse et ordonnée
void ClPoint::abscisse()
{
	std::cout << "L'abscisse du point est" << getX()<< std::endl;
}

void ClPoint::ordonnee()
{
	std::cout << "L'ordonnée du point est" << getY() << std::endl;
}

//Assesseurs
float ClPoint::getX()
{
	return this->X;
}

float ClPoint::getY()
{
	return this->Y;
}

//Mutateurs
void ClPoint::setX(float X)
{
	this->X = X;
}

void ClPoint::setY(float Y)
{
	this->Y = Y;
}