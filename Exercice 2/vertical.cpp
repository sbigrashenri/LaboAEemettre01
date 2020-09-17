/*
// FR : But : Écrire un programme qui prend comme entrée un nombre de cinq chiffres et qui vérifi bien qu'il y a 5 chiffre dans le nombre et enfin, il affiche le nombre verticalement.
Auteur : Sébastien Bigras-Henri
Date : 2020-10-09
*/

#include <iostream>
#include <string>

int main()
{

	setlocale(LC_ALL, "");

	int nombre1;

	std::cout << "veuillez entrer un nombre entier à cinq chiffres :";
	std::cin >> nombre1; // Saisir l'entré des données. 
	// Vérifier le nombre entré : il faut que le nombre1 soit de cinq chiffres.
	// KM : Attention d'utiliser juste les notions vues en classe jusqu'à présent
	if (nombre1 < 10000 || nombre1 > 99999)
	{
		std::cout << " Ce nombre ne contient pas 5 chiffres. ";
		return -1; // Fermeture du programme avec code d'erreur. 
		// KM : Oui excellente idée !
	}
	// KM : Même chose ici, n'utilise que ce qu'on a vu en classe, car ici je veux valider la compétence à utiliser des opérateurs arithmétiques
	// et il y en a aucun dans le code
	std::string charactères = std::to_string(nombre1); // Convertir le nombre en string.
	for (char const& c : charactères)// FR : Parcourir la liste des charactères et imprimer un charactères à la fois.
	{
		std::cout << c << std::endl; // FR : Imprimer un charactère avec un retour de ligne.
	}

	return 0; // Fermeture du programme avec succès.
}
// Plan de tests.
/*
Nombre1           Résultat attendu
12345             Imprimer 12345 en vertical
23475             Imprimer 23475 en vertical
0                 Ce nombre ne contient pas 5 chiffres
abo               Ce nombre ne contient pas 5 chiffres
7853349           Ce nombre ne contient pas 5 chiffres
*/
