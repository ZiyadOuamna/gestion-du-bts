#include <stdio.h>
#include "structures.cpp"
#include <windows.h>
using namespace std;
HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	char buffer[1000];//c'est un varible pour le stockage d'information dans le fichier
	/*=============================================les fonctions de gestion des fillières=================================*/
	void ajouter_filliere(){
		/*int x;
			printf("Si vous avez terminer tapez 1 .");
			scanf("%d",&x);
			if(x==1){
				//liste_principale();
			}
			else{*/
			/*FILE *fichier;
			fichier = fopen("fichier.txt","a");
				if(fichier==NULL){
					printf("there has been an error !.");
				}*/
				  
					
    				
				SetConsoleTextAttribute(h,8);	printf("\n\t\tAjouter l'id de la filliere 1:  ");SetConsoleTextAttribute(h,15);	
				scanf("%d",&filliere1.id_filliere);
				SetConsoleTextAttribute(h,8);	printf("\t\tAjouter le nom de la filliere 1:  ");SetConsoleTextAttribute(h,15);	
				scanf("%s",&filliere1.nom_filliere);
				SetConsoleTextAttribute(h,8);	printf("\n\t\t\t*****************************\n");SetConsoleTextAttribute(h,15);	
				SetConsoleTextAttribute(h,8);	printf("\n\t\tAjouter l'id de la filliere 2:  ");SetConsoleTextAttribute(h,15);	
				scanf("%d",&filliere2.id_filliere);
				SetConsoleTextAttribute(h,8);	printf("\t\tAjouter le nom de la filliere 2:  ");SetConsoleTextAttribute(h,15);	
				scanf("%s",&filliere2.nom_filliere);
				SetConsoleTextAttribute(h,8);	printf("\n\t\t\t*****************************\n");SetConsoleTextAttribute(h,15);	
	
				}			
	void afficher_liste_fillieres(){
		SetConsoleTextAttribute(h,6);	
		printf("\n\t\tles filliere qu'elles exictent sont : \n");
				SetConsoleTextAttribute(h,5);
				printf("\n\t\t\t %s .",filliere1.nom_filliere);
				printf("\n\t\t\t %s .",filliere2.nom_filliere);
				
		
	}
	void chercher_filliere_nom(){
		char nm_filliere[6];
				SetConsoleTextAttribute(h,8);	
				printf("\n\n\tEntrer le nom de la filliere que vous voulez trouver :	");
				scanf("%s",&nm_filliere);
					if (stricmp(nm_filliere,filliere1.nom_filliere) == 0){
						SetConsoleTextAttribute(h,2);
						printf("\n\n\t\t\t\t\tElle exicte.");
					}
					else if (stricmp(nm_filliere,filliere2.nom_filliere) == 0){
						SetConsoleTextAttribute(h,2);	
						printf("\n\n\t\t\t\t\tElle exicte.");
					}
					else {
						SetConsoleTextAttribute(h,4);	
						printf("\n\n\t\t\t\t\tElle n'exicte pas.");
					}
	}
	void modifier_filliere(){
	
	}
	void supprimer_filliere(){
	
	}
	/*=============================================les fonctions de gestion d'etudiants 1==================================*/
	
	char F[6];
	
	void ajouter_etudiant(){
		int i,x;
			SetConsoleTextAttribute(h,14);	
			printf("\n\t\t\t\t*******");printf("Si vous avez terminer tapez 10 si non tapez 20.");printf("*********");scanf("%d",&x);
			if(x==10){
				return;
			}
			else{
				for(i=0;i<2;i++){
					SetConsoleTextAttribute(h,8);	printf("\n\n\t\t Entrer SVP le numero d'insciption d'etudiant %d			:",i+1);SetConsoleTextAttribute(h,3);	
					scanf("%d",&etudiants[i].numero_inscription);
					SetConsoleTextAttribute(h,8);	printf("\n\t\t Entrer le nom de votre etudiant 		    			:");SetConsoleTextAttribute(h,3);	
					scanf("%s",&etudiants[i].nom_etudiant);
					SetConsoleTextAttribute(h,8);	printf("\n\t\t Entrer le prenom de votre etudiant 		    		:");SetConsoleTextAttribute(h,3);	
					scanf("%s",&etudiants[i].prenom_etudiant);
					SetConsoleTextAttribute(h,8);	printf("\n\t\t Saisir la date de naissance de cette etudiant format(JJ MM AAAA):");SetConsoleTextAttribute(h,3);	
					scanf("%d %d %d",&etudiants[i].DateNaiss.jour,&etudiants[i].DateNaiss.mois,&etudiants[i].DateNaiss.annee);
					SetConsoleTextAttribute(h,8);	printf("\n\t\t Entrer la filliere de cet etudiant 		:");SetConsoleTextAttribute(h,3);	
					scanf("%s",&F);
					printf("\n\t			°°°°°°°°°°°°				\n");
				}
			}
	
	}
		///////////////////////////////dans cette fonction il y'a un probleme cest qu'elle affiche
						// les elles mais il ne respect pas si ils ont de la premiere 
						//filliere ou de la deuxieme!!.					//////////////////////////////
					
		void afficher_liste_etudiants_filliere(){

			int i;
			char nom[6];
				SetConsoleTextAttribute(h,8);	
				printf("\n\t\tEntrer le nom du filliere que vous voulez la liste de ces etudiants :	");
				scanf("%s",&nom);//attention
				if(stricmp(nom,filliere1.nom_filliere) == 0){
					SetConsoleTextAttribute(h,2);	
					printf("\t la liste des etudiants de cette filliere est :  \n");

						for(i=0 ; i<30 ;i++){//nous avons besoin d'un tableau des etudiants de filliere 
							SetConsoleTextAttribute(h,14);	
							printf("\t\t\t l'etudiant %d :	%s %s\n",i+1,etudiants[i].nom_etudiant,etudiants[i].prenom_etudiant);
						}
				}
				else if(stricmp(nom,filliere2.nom_filliere) == 0){
					SetConsoleTextAttribute(h,2);	
					printf("\t la liste des etudiants de cette filliere est :  \n");
					
						for(i=0 ; i<30 ;i++){
							SetConsoleTextAttribute(h,14);	
							printf("\t\t\t l'etudiant %d :	%s %s\n",i+1,etudiants[i].nom_etudiant,etudiants[i].prenom_etudiant);	
						}
				}
				else{
					SetConsoleTextAttribute(h,4);	
					printf("\n\t\t\t\t\t\tCette filliere n'exicte pas.Veuillez reessayer.");
				}
				
		}
					/////////////////////////////////////////////////////////////
	
		void chercher_etudiant_numero_inscription(){
			int i,numero_a_chercher;
				SetConsoleTextAttribute(h,8);	
				printf("\n\n\tEntrer le numero d'inscription de l'etudiant que vous voulez trouver :	");
				scanf("%d",&numero_a_chercher);//attention on peut ajouter [i]
					while(numero_a_chercher >= 0){
					
					for(i=0; i<30 ;i++){
					
						if(numero_a_chercher == etudiants[i].numero_inscription){
								SetConsoleTextAttribute(h,2);		
							printf("\n\t\t\t\t\tL'etudiant a ete trouver . Et voila ces informations :	\n");
		SetConsoleTextAttribute(h,14);	printf("\n\n\t\t\t *******************************************************************************");printf("*\n");
							printf("\t\t\t *");	printf("\t\t\t\t\t\t\t\t\t\t*\n");				     	
							printf("\t\t\t *");	printf("\t\t Son NOM est 			:	%s",etudiants[i].nom_etudiant);/*attention on peut ajouter [i]*/printf("\t\t\t*\n");
							printf("\t\t\t *");	printf("\t\t Son PRENOM est 		:	%s",etudiants[i].prenom_etudiant);printf("\t\t\t*\n");
							printf("\t\t\t *");	printf("\t\t Sa Date de Naissance est	:	%d/%d/%d",etudiants[i].DateNaiss.jour,etudiants[i].DateNaiss.mois,etudiants[i].DateNaiss.annee);printf("\t\t*\n");
							printf("\t\t\t *");	printf("\t\t Son Numero d'inscription est 	:	%d",etudiants[i].numero_inscription);printf("\t\t\t*\n");	
							printf("\t\t\t *");	printf("\t\t Sa filliere est  		:	%s",F);printf("\t\t\t*\n");
							printf("\t\t\t *");printf("\t\t\t\t\t\t\t\t\t\t*\n");
							printf("\t\t\t ********************************************************************************\n\n");
								}
						else 
						return;
						}
					}		
	}
		
					/////////////////////////////////////////////////////////////

		void modifier_etudiant(){
		
		}
					/////////////////////////////////////////////////////////////

		void supprimer_etudiant(){
		
		}
					/////////////////////////////////////////////////////////////


	/*=============================================les fonctions de gestion d'etudiants 2==================================*/
	void gestion_etudiants(){
		int choix;
			do{	
						  																         		
					SetConsoleTextAttribute(h,9);																				    						  									
				printf("\n\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");printf("°°\n");
				printf("\t\t°°");	printf("\t\t\t\t\t\t\t\t\t\t\t\t°°\n");				
				printf("\t\t°°");	printf("\t\t 1 ------------ > Ajouter des etudiants");printf("\t\t\t\t\t\t°°\n");
				printf("\t\t°°");	printf("\t\t 2 ------------ > Afficher la liste des etudiants de cette filiere");printf("\t\t°°\n");
				printf("\t\t°°");	printf("\t\t 3 ------------ > Chercher un etudiant par son numero d'inscription");printf("\t\t°°\n");
				printf("\t\t°°");	printf("\t\t 4 ------------ > Modifier les informations d'un etudiant");printf("\t\t\t°°\n");
				printf("\t\t°°");	printf("\t\t 5 ------------ > supprimer un etudiant");printf("\t\t\t\t\t\t°°");
				printf("\t\t\t°°");	printf("\t\t 6 ------------ > Revenir au menu principal");printf("\t\t\t\t\t°°");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\n");
				printf("\t\t°°");	printf("\t\t\t\t\t\t\t\t\t\t\t\t°°\n");	
				printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
				
				SetConsoleTextAttribute(h,8);printf("\tEntrer votre choix :	");SetConsoleTextAttribute(h,11);printf("(Pour revenir au menu principale tapez 6.");printf("Pour la gestion des etudiants tapez 7.)");
					scanf("%d",&choix);
					
				switch(choix){
					case 1:
						ajouter_etudiant();
							break;
					case 2:
						afficher_liste_etudiants_filliere();	
							break;
					case 3:
						chercher_etudiant_numero_inscription();
							break;
					case 4:
						modifier_etudiant();
							break;
					case 5:
						supprimer_etudiant();
							break;
					case 6:
						gestion_etudiants();	//je ne sais pourquoi la fct de la liste principal n'arrive pas lorsque je l'appelle.
							break;
				
					default:
						SetConsoleTextAttribute(h,4);
						printf("\t\t\t\t\t\tChoix invalide.Veuiller reessayer\n");
							break;
				}
		
			}while(choix != 7);
	
	
	}
		
	void liste_principale(){
		int choix;
			do{
							
					SetConsoleTextAttribute(h,9);																					    						  									
				printf("\n\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");printf("°°\n");
				printf("\t\t°°");	printf("\t\t\t\t\t\t\t\t\t\t\t\t°°\n");				
				printf("\t\t°°");	printf("\t\t 1 ------------ > Ajouter une filiere");printf("\t\t\t\t\t\t°°\n");
				printf("\t\t°°");	printf("\t\t 2 ------------ > afficher la liste de toutes les filieres");printf("\t\t\t°°\n");
				printf("\t\t°°");	printf("\t\t 3 ------------ > chercher une filiere par son nom");printf("\t\t\t\t°°\n");
				printf("\t\t°°");	printf("\t\t 4 ------------ > Modifier les informations d’une filiere");printf("\t\t\t°°\n");
				printf("\t\t°°");	printf("\t\t 5 ------------ > supprimer une filiere");printf("\t\t\t\t\t\t°°\n");//by ziyad ouamna
				printf("\t\t°°");	printf("\t\t 6 ------------ > Gerer les etudiants d'une filiere");printf("\t\t\t\t°°\n");
				printf("\t\t°°");	printf("\t\t 7 ------------ > Quitter le programme");printf("\t\t\t\t\t\t°°\n");
				printf("\t\t°°");	printf("\t\t\t\t\t\t\t\t\t\t\t\t°°\n");	
				printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
				
				SetConsoleTextAttribute(h,8);
				printf("\n\n\tEntrer votre choix :	");
				scanf("%d",&choix);
				
				switch(choix){
					case 1:
						ajouter_filliere();
							break;
					case 2:
						afficher_liste_fillieres();
							break;
					case 3:
						chercher_filliere_nom();
							break;
					case 4:
						modifier_filliere();
							break;
					case 5:
						supprimer_filliere();
							break;
					case 6:
						gestion_etudiants();
							break;
			
					case 7:
							SetConsoleTextAttribute(h,6);
						printf("\t\t\t\t\t\tMerci d'avoir utiliser ce programme.\n");
							break;
					default :
							SetConsoleTextAttribute(h,4);
						printf("\t\t\t\t\t\tChoix invalide.Veuiller reessayer.\n");
				}
			
			}while(choix != 7);
	}
	
