// But :
// Auteur :
// Date :



#pragma once


void traiterRectangle(int choixRemplissage); // Ces fonctions, selon la forme, demandent les dimensions de la forme, affichent la phrase de pr�sentation de la forme avec les bonnes dimensions et finalement appellent la fonction dessinant la forme. Il y aura donc 4 versions de cettefonction : traiterRectangle(), traiterCarre(), traiterTriangle(),traiterLosange().
void traiterTriangle(int choixRemplissage);
void traiterCarre(int choixRemplissage);
void traiterLosange(int choixRemplissage);

void dessinerCarre(int largeur, int choixRemplissage);
void dessinerRectangle(int hauteur, int largeur, int choixRemplissage); // Fonction qui dessine un rectangle ou un carr� dont la hauteur, la largeur et le mode de remplissage sont pass�s en param�tre.
void dessinerTriangle1(int largeur, int choixRemplissage); // Fonction qui dessine un triangle dans la position 1 dont la hauteur et le mode de remplissage sont pass�s en param�tre.
void dessinerTriangle2(int largeur, int choixRemplissage); // Fonction qui dessine un triangle dans la position 2 dont la hauteur et le mode de remplissage sont pass�s en param�tre.
void dessinerTriangle3(int largeur, int choixRemplissage); // Fonction qui dessine un triangle dans la position 3 dont la hauteur et le mode de remplissage sont pass�s en param�tre.
void dessinerTriangle4(int largeur, int choixRemplissage); // Fonction qui dessine un triangle dans la position 4 dont la hauteur et le mode de remplissage sont pass�s en param�tre
/*dessinerLosange(); // Fonction qui dessine un losange dont la hauteur et le mode de remplissage sont pass�s en param�tre.*/
//genererNombreAleatoire(); // Fonction qui retourne un nombre al�atoire compris entre min et max pass�s en param�tre.