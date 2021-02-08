#include <iostream>
using namespace std;

void echanger(long &A, long &B)
{
	long C = A;
	A = B;
	B = C;
}

// Afficher le contenu d'un intervalle d'un tableau.
void afficherTableau(long T[], long debut, long fin)
{
	long compteur = 1;
	for (long K = debut; K <= fin; K++)
	{
		cout << T[K];
		if (compteur % 10 == 0)
			cout << endl;
		else
			cout << "\t";
		compteur++;
	}
}


void triPartielBullesSpecial(long T[], long debut, long delta, long fin)
{
	/*********************************************/
	/* Votre réponse va dans ce bloc-ci de code. */
	/*********************************************/





}

int main()
{
	long debut, delta, fin;
	long indice[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	cout << "Test 1 " << endl;
	debut = 0; delta = 2; fin = 9;
	cout << "debut = " << debut << "  delta = " << delta << " fin = " << fin << endl;
	long tableau1[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	cout << "Indice : " ;
	afficherTableau(indice, 0, 9);
	cout << "Avant  : " ;
	afficherTableau(tableau1, 0, 9);
	triPartielBullesSpecial(tableau1, debut, delta, fin);
	cout << "Apres  : " ;
	afficherTableau(tableau1, 0, 9);
	cout << endl;

	cout << "Test 2 " << endl;
	debut = 1; delta = 2; fin = 9;
	cout << "debut = " << debut << "  delta = " << delta << " fin = " << fin << endl;
	long tableau2[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	cout << "Indice : ";
	afficherTableau(indice, 0, 9);
	cout << "Avant  : ";
	afficherTableau(tableau2, 0, 9);
	triPartielBullesSpecial(tableau2, debut, delta, fin);
	cout << "Apres  : ";
	afficherTableau(tableau2, 0, 9);
	cout << endl;

	cout << "Test 3 " << endl;
	debut = 0; delta = 3; fin = 9;
	cout << "debut = " << debut << "  delta = " << delta << " fin = " << fin << endl;
	long tableau3[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	cout << "Indice : ";
	afficherTableau(indice, 0, 9);
	cout << "Avant  : ";
	afficherTableau(tableau3, 0, 9);
	triPartielBullesSpecial(tableau3, debut, delta, fin);
	cout << "Apres  : ";
	afficherTableau(tableau3, 0, 9);
	cout << endl;

	cout << "Test 4 " << endl;
	debut = 1; delta = 3; fin = 9;
	cout << "debut = " << debut << "  delta = " << delta << " fin = " << fin << endl;
	long tableau4[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	cout << "Indice : ";
	afficherTableau(indice, 0, 9);
	cout << "Avant  : ";
	afficherTableau(tableau4, 0, 9);
	triPartielBullesSpecial(tableau4, debut, delta, fin);
	cout << "Apres  : ";
	afficherTableau(tableau4, 0, 9);
	cout << endl;

	cout << "Test 5 " << endl;
	debut = 2; delta = 3; fin = 9;
	cout << "debut = " << debut << "  delta = " << delta << " fin = " << fin << endl;
	long tableau5[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	cout << "Indice : ";
	afficherTableau(indice, 0, 9);
	cout << "Avant  : ";
	afficherTableau(tableau5, 0, 9);
	triPartielBullesSpecial(tableau5, debut, delta, fin);
	cout << "Apres  : ";
	afficherTableau(tableau5, 0, 9);
	cout << endl;

	cout << "Test 6 " << endl;
	debut = 0; delta = 4; fin = 9;
	cout << "debut = " << debut << "  delta = " << delta << " fin = " << fin << endl;
	long tableau6[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	cout << "Indice : ";
	afficherTableau(indice, 0, 9);
	cout << "Avant  : ";
	afficherTableau(tableau6, 0, 9);
	triPartielBullesSpecial(tableau6, debut, delta, fin);
	cout << "Apres  : ";
	afficherTableau(tableau6, 0, 9);
	cout << endl;

	cout << "Test 7 " << endl;
	debut = 1; delta = 4; fin = 9;
	cout << "debut = " << debut << "  delta = " << delta << " fin = " << fin << endl;
	long tableau7[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	cout << "Indice : ";
	afficherTableau(indice, 0, 9);
	cout << "Avant  : ";
	afficherTableau(tableau7, 0, 9);
	triPartielBullesSpecial(tableau7, debut, delta, fin);
	cout << "Apres  : ";
	afficherTableau(tableau7, 0, 9);
	cout << endl;

	cout << "Test 8 " << endl;
	debut = 2; delta = 4; fin = 9;
	cout << "debut = " << debut << "  delta = " << delta << " fin = " << fin << endl;
	long tableau8[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	cout << "Indice : ";
	afficherTableau(indice, 0, 9);
	cout << "Avant  : ";
	afficherTableau(tableau8, 0, 9);
	triPartielBullesSpecial(tableau8, debut, delta, fin);
	cout << "Apres  : ";
	afficherTableau(tableau8, 0, 9);
	cout << endl;


	cout << "Test 9 " << endl;
	debut = 3; delta = 4; fin = 9;
	cout << "debut = " << debut << "  delta = " << delta << " fin = " << fin << endl;
	long tableau9[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	cout << "Indice : ";
	afficherTableau(indice, 0, 9);
	cout << "Avant  : ";
	afficherTableau(tableau9, 0, 9);
	triPartielBullesSpecial(tableau9, debut, delta, fin);
	cout << "Apres  : ";
	afficherTableau(tableau9, 0, 9);
	cout << endl;


	cout << "Test 10 " << endl;
	debut = 3; delta = 4; fin = 9;
	cout << "debut = " << debut << "  delta = " << delta << " fin = " << fin << endl;
	long tableau10[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	cout << "Indice : ";
	afficherTableau(indice, 0, 9);
	cout << "Avant  : ";
	afficherTableau(tableau10, 0, 9);
	triPartielBullesSpecial(tableau10, debut, delta, fin);
	cout << "Apres  : ";
	afficherTableau(tableau10, 0, 9);
	cout << endl;

	cout << "Test 11 " << endl;
	debut = 0; delta = 5; fin = 9;
	cout << "debut = " << debut << "  delta = " << delta << " fin = " << fin << endl;
	long tableau11[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	cout << "Indice : ";
	afficherTableau(indice, 0, 9);
	cout << "Avant  : ";
	afficherTableau(tableau11, 0, 9);
	triPartielBullesSpecial(tableau11, debut, delta, fin);
	cout << "Apres  : ";
	afficherTableau(tableau11, 0, 9);
	cout << endl;

	cout << "Test 12 " << endl;
	debut = 1; delta = 5; fin = 9;
	cout << "debut = " << debut << "  delta = " << delta << " fin = " << fin << endl;
	long tableau12[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	cout << "Indice : ";
	afficherTableau(indice, 0, 9);
	cout << "Avant  : ";
	afficherTableau(tableau12, 0, 9);
	triPartielBullesSpecial(tableau12, debut, delta, fin);
	cout << "Apres  : ";
	afficherTableau(tableau12, 0, 9);
	cout << endl;


	cout << "Test 13 " << endl;
	debut = 2; delta = 5; fin = 9;
	cout << "debut = " << debut << "  delta = " << delta << " fin = " << fin << endl;
	long tableau13[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	cout << "Indice : ";
	afficherTableau(indice, 0, 9);
	cout << "Avant  : ";
	afficherTableau(tableau13, 0, 9);
	triPartielBullesSpecial(tableau13, debut, delta, fin);
	cout << "Apres  : ";
	afficherTableau(tableau13, 0, 9);
	cout << endl;


	cout << "Test 14 " << endl;
	debut = 3; delta = 5; fin = 9;
	cout << "debut = " << debut << "  delta = " << delta << " fin = " << fin << endl;
	long tableau14[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	cout << "Indice : ";
	afficherTableau(indice, 0, 9);
	cout << "Avant  : ";
	afficherTableau(tableau14, 0, 9);
	triPartielBullesSpecial(tableau14, debut, delta, fin);
	cout << "Apres  : ";
	afficherTableau(tableau14, 0, 9);
	cout << endl;

	cout << "Test 15 " << endl;
	debut = 4; delta = 5; fin = 9;
	cout << "debut = " << debut << "  delta = " << delta << " fin = " << fin << endl;
	long tableau15[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	cout << "Indice : ";
	afficherTableau(indice, 0, 9);
	cout << "Avant  : ";
	afficherTableau(tableau15, 0, 9);
	triPartielBullesSpecial(tableau15, debut, delta, fin);
	cout << "Apres  : ";
	afficherTableau(tableau15, 0, 9);
	cout << endl;


	return 0;
}