/*
But : Écrire un programme qui prend comme entrée un nombre de cinq chiffres et qui vérifi bien qu'il y a 5 chiffre dans le nombre et enfin, il affiche le nombre verticalement.
Auteur : Sébastien Bigras-Henri
Date : 2020-10-09
*/

#include <iostream>
#include <string>

std::string estilpair(int chiffre)
{
	if (chiffre % 2 == 0)
	{
		return "pair";  // retourné vrai le chiffre est pair.
	}

	return "impair";
}
int main()
{

	setlocale(LC_ALL, "");

	int nombre1;

	std::cout << "veuillez entrer un nombre entier à cinq chiffres :";
	std::cin >> nombre1;
	// vérifier le nombre entré : il faut que le nombre1 soit de cinq chiffres.
	if (nombre1 < 10000 || nombre1 > 99999)
	{
		std::cout << " Ce nombre ne contient pas 5 chiffres. ";
		return -1; // Fermeture du programme avec code d'erreur. 
	}
	std::string charactères = std::to_string(nombre1); // Convertir le nombre en string.
	for (char const& c : charactères)// parcourir la liste des charactères et imprimer un charactères à la fois.
	{

		std::cout << c << " " << estilpair(c) << std::endl;
		//std::cout << pair << std::endl;

	}



	return 0; // Fermeture du programme avec succès.
}
