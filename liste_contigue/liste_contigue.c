/*-----------------------------------------------------------------------------------------------*/
/*                                                                                               */
/*                                    liste_contigue.c                                           */
/*                                                                                               */
/* Role : Définition des fonctions et procédures liées aux traitement sur les listes contigues.  */
/*                                                                                               */
/*-----------------------------------------------------------------------------------------------*/




#include "./liste_contigue.h"








/*-----------------------------------------------------------------------------------------------*/
/*                                                                                               */
/* AllocationListe         Alloue une liste contigue où chaque élément est sur un mot.           */
/*                                                                                               */
/* En entrée             : taille - Taille de la liste contigue à allouer.                       */
/*                                                                                               */
/* En sortie             : tab    - Retourne un pointeur de tête de liste contigue.              */
/*                                                                                               */
/* Variable(s) locale(s) : tab    - Pointeur de tête de liste contigue.                          */
/*                                                                                               */
/*-----------------------------------------------------------------------------------------------*/



objet * AllocationListe(int taille)
{

	objet * tab = (objet *)malloc(taille * sizeof(objet));

	return tab;

}


/*-----------------------------------------------------------------------------------------------*/
/*                                                                                               */
/* LongueurListe           Calcule et donne la longueur d'une liste contigue dont chaque élément */
/*                         est sur un mot.                                                       */
/*                                                                                               */
/* En entrée             :*/
/*                                                                                               */
/* En sortie             :*/
/*                                                                                               */
/* Variable(s) locale(s) :*/
/*                                                                                               */
/*-----------------------------------------------------------------------------------------------*/


/*int LongueurListe(objet * tab)
{

	static int longueur = 0;

	if(tab)                         si la liste est non vide
	{

		while (tab + longueur])
		{


		}
	}
}*/



/*-----------------------------------------------------------------------------------------------*/
/*                                                                                               */
/**/
/*                                                                                               */
/* En entrée             :*/
/*                                                                                               */
/* En sortie             :*/
/*                                                                                               */
/* Variable(s) locale(s) :*/
/*                                                                                               */
/*-----------------------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------------------------*/
/*                                                                                               */
/*-----------------------------------------------------------------------------------------------*/
