#include "Formes2044076.h"
#include <string>
#include <iostream>
using namespace std;


void traiterCarre(int choixRemplissage)			// FORMULE PRIS DANS LE COURS DE PROG!!!!!!
{
	// Déclaration des variables

	string clavier;
	int largeur;

	cout << "Veuillez indiquer une largeur : ";
	cout << "Veuillez indiquer une hauteur : ";

	getline(cin, clavier, '\n');		// getline permet de lire et supprimé tout ce qu'il y a dans la mémoire du clavier;
	
	clavier.empty();
	while (((clavier.empty() || ((clavier.front() < '0' || clavier.front() > '9')
		&& (clavier.length() <= 1 || clavier.front() != '-' || clavier.at(1) < '0' || clavier.at(1) > '9')))))
	{
		
		cout << "Erreur : Vous devez taper des chiffre " << endl;
		cout << "1. Veuillez indiquer la largeur" << endl;
		cout << "2. Veuillez indiquer une hauteur : " << endl;
		getline(cin, clavier, '\n');		// getline permet de lire et supprimé tout ce qu'il y a dans la mémoire du clavier;
		clavier.empty();
	}

	largeur = stoi(clavier);				
	cout << "Voici votre carré de " << largeur << " :" << endl;	

	dessinerCarre(largeur, choixRemplissage);		// Il faut faire appel à la fonction

}

void traiterLosange(int choixRemplissage)				// FORMULE PRIS DANS LE COURS DE PROG!!!!!!
{
	// Déclaration des variables

	string clavier;
	int hauteur;
	int largeur;

	cout << "Veuillez indiquer une hauteur : ";

	getline(cin, clavier, '\n');		// getline permet de lire et supprimé tout ce qu'il y a dans la mémoire du clavier;
	
	clavier.empty();
	while (((clavier.empty() || ((clavier.front() < '0' || clavier.front() > '9')
		&& (clavier.length() <= 1 || clavier.front() != '-' || clavier.at(1) < '0' || clavier.at(1) > '9')))))
	{
	
		cout << "Erreur : Vous devez taper des chiffre " << endl;
		cout << "1. Veuillez indiquer la hauteur" << endl;
		getline(cin, clavier, '\n');		// getline permet de lire et supprimé tout ce qu'il y a dans la mémoire du clavier;
		clavier.empty();
	}



	hauteur = stoi(clavier);			



	cout << "Veuillez indiquer une largeur : ";

	getline(cin, clavier, '\n');		// getline permet de lire et supprimé tout ce qu'il y a dans la mémoire du clavier;
	clavier.empty();
	while (((clavier.empty() || ((clavier.front() < '0' || clavier.front() > '9')
		&& (clavier.length() <= 1 || clavier.front() != '-' || clavier.at(1) < '0' || clavier.at(1) > '9')))))
	{
		
		cout << "Erreur : Vous devez taper des chiffre " << endl;
		cout << "1. Veuillez indiquer la largeur" << endl;
		getline(cin, clavier, '\n');		// getline permet de lire et supprimé tout ce qu'il y a dans la mémoire du clavier;
		clavier.empty();
	}




	largeur = stoi(clavier);				
	


}



void traiterTriangle(int choixRemplissage)
{
	// Déclaration des variables

	string clavier;
	int largeur;
	int alea;

	alea = rand() % 4 + 1;			// Variable aléatoire
	cout << "Veuillez indiquer une largeur : ";

	getline(cin, clavier, '\n');		// getline permet de lire et supprimé tout ce qu'il y a dans la mémoire du clavier;
	
	clavier.empty();
	while (((clavier.empty() || ((clavier.front() < '0' || clavier.front() > '9')
		&& (clavier.length() <= 1 || clavier.front() != '-' || clavier.at(1) < '0' || clavier.at(1) > '9')))))
	{
		
		cout << "Erreur : Vous devez taper des chiffre " << endl;
		cout << "1. Veuillez indiquer la largeur" << endl;
		getline(cin, clavier, '\n');		// getline permet de lire et supprimé tout ce qu'il y a dans la mémoire du clavier;
		clavier.empty();
	}

	largeur = stoi(clavier);				

	


	switch (alea)			//choisi quel triangle dessiner selon le nombre aléatoire générer
	{
	case 1:
		dessinerTriangle1(largeur, choixRemplissage);
	case 2:
		dessinerTriangle2(largeur, choixRemplissage);
	case 3:
		dessinerTriangle3(largeur, choixRemplissage);
	case 4:
		dessinerTriangle4(largeur, choixRemplissage);
	}

}

void traiterRectangle(int choixRemplissage)			// FORMULE PRIS DANS LE COURS DE PROG!!!!!!
{
	// Déclaration des variables
	string clavier;
	int hauteur;
	int largeur;

	cout << "Veuillez indiquer une hauteur : ";

	getline(cin, clavier, '\n');		// getline permet de lire et supprimé tout ce qu'il y a dans la mémoire du clavier;
	
	clavier.empty();
	while (((clavier.empty() || ((clavier.front() < '0' || clavier.front() > '9')
		&& (clavier.length() <= 1 || clavier.front() != '-' || clavier.at(1) < '0' || clavier.at(1) > '9')))))
	{
		
		cout << "Erreur : Vous devez taper des chiffre " << endl;
		cout << "1. Veuillez indiquer la hauteur" << endl;
		getline(cin, clavier, '\n');		
		clavier.empty();
	}




	hauteur = stoi(clavier);			



	cout << "Veuillez indiquer une largeur : ";

	getline(cin, clavier, '\n');		// getline permet de lire et supprimé tout ce qu'il y a dans la mémoire du clavier;
	
	clavier.empty();
	while (((clavier.empty() || ((clavier.front() < '0' || clavier.front() > '9')
		&& (clavier.length() <= 1 || clavier.front() != '-' || clavier.at(1) < '0' || clavier.at(1) > '9')))))
	{
		
		cout << "Erreur : Vous devez taper des chiffre " << endl;
		cout << "1. Veuillez indiquer la largeur" << endl;
		getline(cin, clavier, '\n');	
		
	}


	

	largeur = stoi(clavier);			

	

	// Fonction qui va dessiner la forme

	dessinerRectangle(hauteur, largeur, choixRemplissage);			

	system("pause");
	system("cls");
}


void dessinerCarre(int largeur, int choixRemplissage)
{
	char remplissage;
	const char CONTOUR_DE_FORME = '*';

	if (choixRemplissage == 1)
	{
		remplissage = '#';
	}
	else
	{
		remplissage = ' ';
	}

	for (int compteurlignes = 0; compteurlignes < largeur; compteurlignes++)
	{

		for (int i = 0; i < largeur; i++)
		{
			if (i == 0 || i == (largeur - 1) || compteurlignes == 0 || compteurlignes == (largeur - 1))
				cout << CONTOUR_DE_FORME;
			else
				cout << remplissage;
		}

		cout << endl;
	}
}

void dessinerRectangle(int hauteur, int largeur, int choixRemplissage)		//fonction qui dessine le rectangle.
{
	// Déclaration des variables
	char interieur;	

	const char CONTOUR_DE_FORME = '*';

	if (choixRemplissage == 1)			//Dépend du choixRemplissage
	{
		interieur = '#';
	}
	else
	{
		interieur = ' ';
	}

	for (int compteurlignes = 0; compteurlignes < hauteur; compteurlignes++)	
		// Ceci est la boucle utilisé pour compter les lignes horizontales
	{

		for (int i = 0; i < largeur; i++)			
		// Cette boucle affiche les caractère selon les paramètre choisie
		{
			if (i == 0 || i == (largeur - 1) || compteurlignes == 0 || compteurlignes == (hauteur - 1))
				cout << CONTOUR_DE_FORME;
			else
				cout << interieur;
		}

		cout << endl;
	}
}

void dessinerTriangle1(int largeur, int choixRemplissage)
{
	// Déclaration des fonctions
	const char CONTOUR_DE_FORME = '*';
	const char VIDE = ' ';
	char remplissage;

	//Indiquer l'intérieur de la forme
	if (choixRemplissage == 1)
	{
		remplissage = '#';
	}
	else
	{
		remplissage = ' ';
	}

	for (int nbLignes = 0; nbLignes < largeur; nbLignes++)
	{
		for (int i = 0; i < largeur; i++)
		{
			if (i == 0)
			{
				cout << CONTOUR_DE_FORME;		// Ceci dterminent si c'est un CONTOUR_DE_FORME, le remplissage ou l'ESPACE
			}
			
			if (i == nbLignes)
				if (i != largeur -1)
				{
					cout << CONTOUR_DE_FORME;
				}
			if (nbLignes == largeur -1)
			{
				cout << CONTOUR_DE_FORME;
			}
			if (i < nbLignes && (nbLignes != (largeur - 1)))
			{
				cout << remplissage;
			}
			else
			{
				if (nbLignes != largeur - 1)
				{
					cout << VIDE;
				}
			}
		
		}	
	}

}

void dessinerTriangle2(int largeur, int choixRemplissage)			// Semblable au triangle1
{
	// Délcaration des fonctions
	const char CONTOUR_DE_FORME = '*';
	const char VIDE = ' ';
	char remplissage;

	if (choixRemplissage == 1)
	{
		remplissage = '#';
	}
	else
	{
		remplissage = ' ';
	}

	for (int nbLignes = 0; nbLignes < largeur; nbLignes++)
	{
		for (int i = largeur; i >= 0; i=i-1)
		{
			if (i == 0)
				cout << CONTOUR_DE_FORME;
			if (i == nbLignes)
				if (i != largeur)
					cout << CONTOUR_DE_FORME;
			if (nbLignes == largeur - 1)
				if (i == largeur)
					cout << VIDE;
				else if (i < largeur - 1)
					cout << CONTOUR_DE_FORME;
			if (i <= nbLignes && i > 0 && (nbLignes != largeur - 1))
				cout << remplissage;
			else if (nbLignes != largeur - 1)
				cout << VIDE;
		}
	}



}

void dessinerTriangle3(int largeur, int choixRemplissage)			// Semblable au triangle1
{
	const char CONTOUR_DE_FORME = '*';
	const char VIDE = ' ';
	char remplissage;

	if (choixRemplissage == 1)
	{
		remplissage = '#';
	}
	else
	{
		remplissage = ' ';
	}
		for (int nbLignes = 0; nbLignes < largeur; nbLignes++)
	{
		for (int i = 0; i < largeur;i++)
		{
			if (nbLignes == 0)
			{ 
				cout << CONTOUR_DE_FORME;
			}
			if (i == largeur - 1)
			{ 
				cout << CONTOUR_DE_FORME;
			}
			if (i == nbLignes)
			{ 
				cout << CONTOUR_DE_FORME;
			}
			if (i > nbLignes && nbLignes != 0 && i != largeur - 1)
			{ 
				cout << nbLignes;
			}
			else 
			{ 
				if (nbLignes != 0)
				{ 
					cout << VIDE;
				}
			}
		
		
		
		}
		cout << endl;

	}
}

void dessinerTriangle4(int largeur, int choixRemplissage)		// Semblable au triangle 2
{
	const char CONTOUR_DE_FORME = '*';
	const char VIDE = ' ';
	char remplissage;

	if (choixRemplissage == 1)
	{
		remplissage = '#';
	}
	else
	{
		remplissage = ' ';
	}
	for (int nbLignes = 0; nbLignes < largeur; nbLignes++)
	{
		for (int i = largeur; i >= 0; i = i - 1)
		{
			if (nbLignes == 0)
				cout << CONTOUR_DE_FORME;
			if (i == largeur)
				cout << CONTOUR_DE_FORME;
			if (i == nbLignes)
				cout << CONTOUR_DE_FORME;
			if (i > nbLignes && nbLignes != 0 && i != 0)
				cout << remplissage;
			else if (nbLignes != 0)
				cout << VIDE;

		}
		cout << endl;

	}

}


