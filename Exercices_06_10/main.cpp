#include<stdio.h>
#include<iostream>
#include<string>
#include "ClPoint.h"

int main()
{
	float val_x;					//variables destinées aux valeures X et Y de base
	float val_y;

	std::cout << "Entrer la coordonne X du point" << std::endl;
	std::cin >> val_x;
	std::cout << "Entrer la coordonne Y du point" << std::endl;
	std::cin >> val_y;

	ClPoint point(val_x, val_y);

	point.affichage();

	float calc_x;					//Variables destinéess  aux modifications
	float calc_y;

	std::cout << "Entrer le deplacement X du point" << std::endl;
	std::cin >> calc_x;
	std::cout << "Entrer la deplacement Y du point" << std::endl;
	std::cin >> calc_y;

	point.deplacement(calc_x, calc_y);

	point.affichage();

	point.abscisse();

	point.ordonnee();

	return 0;
}