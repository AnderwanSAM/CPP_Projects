#include <iostream>
using namespace std ;

char multiplication( short A, short B )
{
	return A * B ;
}

int main()
{

	// Ceci est l'exemple empoyé pour vous montrer comment écrire vos réponses.
		long variable = 45 ;
	// ERREUR : cout >> variable >> endl ;
	// EXPLICATION : Il y a erreur car on a utilisé des opérateurs 
	//  d’extraction de flux au lieu d’opérateur d’insertion de flux.
	cout << variable <<  endl ; // CORRECTION

	cout << endl << "La valeur ci-dessus provient de l'exemple de correction de code." << endl << endl ;

	/*
		Ce programme affiche une table de multiplication.

	Comme toute bonne table de multiplication, il y aura un certain nombre de colonnes ( 1<= Nb_Colonnes <= 7)
	et un certain nombre de rangées ( 1 <= Nb_Rangees <= 20). Ces données seront obtenues du clavier.
	Par la suite, la table sera générée.

	*/

	// Entrées et validation des entrées.
	short Nb_Colonnes, Nb_Rangees ;
	do
	{
		cout << "Entrer le nombre de colonnes (entre 1 et 7) : " ;
		cin >> Nb_Colonnes ;
		if(Nb_Colonnes < 1 || Nb_Colonnes > 7) 
			cout << "Invalide - SVP re-entrer la valeur." << endl ;
	} while(  Nb_Colonnes < 1 || Nb_Colonnes > 7 ) ;

	do
	{
		cout << "Entrer le nombre de rangees : " ;
		cin >> Nb_Rangees ;
		if( Nb_Rangees < 1 || Nb_Rangees > 20 ) 
			cout << "Invalide - SVP re-entrer la valeur." << endl ;
	} while( Nb_Rangees < 1 || Nb_Rangees > 20 ) ;

	// Affichage de la table de multiplications.

	cout << endl << endl << "Nb_Colonnes = " << Nb_Colonnes << endl ;

	cout << "Nb_Rangees = " << Nb_Rangees << endl << endl ;
		
	// Fabrication de l'entête de la table de multiplication
	cout << endl << endl << "La Table de multiplications" << endl << endl ;
	cout << " * " << "\t" << "|" << "\t" ; 
	for( short colonne = 1 ; colonne <= Nb_Colonnes ; colonne++ )
		cout << colonne << "\t" ;
	cout << endl ;

	cout << "________"  ;

	for( short colonne = 1 ; colonne <= Nb_Colonnes ; colonne++ )
		cout << "________" ;
	cout << "___" << endl ;


	for( short rangee = 1 ; rangee < Nb_Rangees ; rangee++ )
	{
		cout << rangee << "\t" << "|" << "\t" ;
		for( short colonne = 1 ; colonne <= Nb_Colonnes ; colonne++ )
			cout << multiplication(rangee,colonne+1) << "\t" ;
		cout << endl ;
	}

	cout << endl << endl << endl ;

	return 0 ;
}