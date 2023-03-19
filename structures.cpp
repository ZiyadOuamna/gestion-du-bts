#include<stdio.h>
/*=============================================les structures qu'on va utiliser====================================================*/
	/*=============================================la structure Date ====================================================*/
	struct Date{
		int jour;
		int annee;
		int mois;
	};
	/*=============================================la structure etudiant=========================by=======================*/
	struct etudiant{
		int numero_inscription;
		char nom_etudiant[15];
		char prenom_etudiant[15];
		struct Date DateNaiss;
	};
	/*=============================================la structure du tableau d'etudiant=================ziyad===============================*/
	struct etudiant etudiants[30];
	/*=============================================la structure filliere =======================ouamna=========================*/
	struct filliere{
		int id_filliere;
		char nom_filliere[6];
		

	};
	struct filliere filliere1;
	struct filliere filliere2;
