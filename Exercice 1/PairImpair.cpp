/*  
	But : Écrire un programme qui lit un entier et qui détermine et affiche s'il sagit d'un entier
	ou d'un entier impair
	Auteur : Sébatien Bigras-Henri
	Date :2020-10-08
*/
#include <iostream>

int main()
{
	setlocale(LC_ALL, ""); // Va servir à convertir les accents de Windows à la console de la bonne façon

	int nombre1; // la variable est déclaré ici, au début si programme. 


	// Le programme invite l'utilisateur à taper un nombre entier, par la suite le programme l'affiche
	std::cout << "veuillez entrer un nombre entier : ";
	// Le programme 
	std::cin >> nombre1;

	if (nombre1 % 2 == 0 ) // Le programme regarde les nombres entrés par l'utilisateur et lui dit s'il est pair ou impair.
		// création d'un autre block d'instruction qui sera activé seulement si la condition est vraie
	{
		std::cout << nombre1 << " est un nombre pair"; // Si le programme détecte que le nombre se termine par 2, 4, 6, 8 ou 0
		                                               // il doit écrire cette la phrase nombre1 "est un nombre pair"
	}
	else
	{
		std::cout << nombre1 << " est un nombre impair";  // À l'inverse s'il ne détecte pas que le nombre est divisible par un de ces nombre, 
		                                                   // il marquera que le nombre1 "est un nombre impair" 
	}

	return 0; // Fermeture du programme avec succès.

}

// Plan de tests
/*
nombre1              résultat attendu
12                   12 est un nombre pair
-7                   -7 est un nombre impair
45                   45 est un nombre impair
-34                   34 est un nombre pair
15674674             15674674 est un nombre pair
*/