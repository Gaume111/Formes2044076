#include "Menus2044076.h"
#include <string>
#include <iostream>
using namespace std;

void afficherMenu1()
{
	cout << "1. Rectangle" << endl << "2. Triangle " << endl << "3. Carré" << endl << "4. Losange" << endl << "5. Quitter" << endl << "Votre choix : ";
}

void afficherMenu2()
{
	cout << "1.Forme pleine" << endl << "2.Forme vide" << endl << "3.Retour en arrière" << endl << "Votre choix --> : ";
}

int validerMenu1(int MIN, int MAX, int QUITTER)
{											// FORMULE PRIS DANS LE COURS DE PROG!!!!!!
	// Déclaration des variables

	string clavier;
	int choixForme;


	getline(cin, clavier, '\n');		// getline permet de lire et supprimé tout ce qu'il y a dans la mémoire du clavier;
	
	clavier.empty();
	while (((clavier.empty() || ((clavier.front() < '0' || clavier.front() > '9')
		&& (clavier.length() <= 1 || clavier.front() != '-' || clavier.at(1) < '0' || clavier.at(1) > '9')))) || clavier.front() < '1' || clavier.front() > '5')
	{
		
		cout << "Erreur : Vous devez taper des chiffre " << endl;
		cout << "1. Rectangle" << endl << "2. Triangle " << endl << "3. Carré" << endl << "4. Losange" << endl << "5. Quitter" << endl << "Votre choix : ";
		getline(cin, clavier, '\n');		// getline permet de lire et supprimé tout ce qu'il y a dans la mémoire du clavier;
		clavier.empty();
	}


	

	choixForme = stoi(clavier);				


	return choixForme;

}



int validerMenu2(int MIN, int MAX, int RETOUR)			// FORMULE PRIS DANS LE COURS DE PROG!!!!!!
{
	// Déclaration des variables

	string clavier;
	int choixRemplissage;


	getline(cin, clavier, '\n');		// getline permet de lire et supprimé tout ce qu'il y a dans la mémoire du clavier;
	
	clavier.empty();
	while (((clavier.empty() || ((clavier.front() < '0' || clavier.front() > '9')
		&& (clavier.length() <= 1 || clavier.front() != '-' || clavier.at(1) < '0' || clavier.at(1) > '9')))) || clavier.front() < '1' || clavier.front() > '3')
	{
		
		cout << "Erreur : Vous devez taper des chiffre " << endl;
		cout << "1.Forme pleine" << endl << "2.Forme vide" << endl << "3.Retour en arrière" << endl << "Votre choix --> : ";
		getline(cin, clavier, '\n');		// getline permet de lire et supprimé tout ce qu'il y a dans la mémoire du clavier;
		clavier.empty();


	}

	choixRemplissage = stoi(clavier);				
	return choixRemplissage;

}