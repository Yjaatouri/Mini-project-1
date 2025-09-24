#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //declare les variables
    int i,j,y,x=0,n=0,nq,t=-1;
    char titre2 [25];
    char titres[100][50];
    char auteurs[100][50];
    float prix[100];
    int quantite[100];
    //loop pour le demand d'action
    do{
    //l'affichage des choix
    printf("=============================================\n");
    printf("*1 Pour ajouter un livre*\n");
    printf("*2 Pour afficher tous les livre disponible*\n");
    printf("*3 Rechercher un livre par son titre*\n");
    printf("*4 Mettre a jour la quantite d'un livre*\n");
    printf("*5 Supprimer un livre du stock*\n");
    printf("*6 Afficher le nombre total de livres en stock*\n");
    printf("*0 pour quiter le program!!\n");
    printf("==============================================\n");
    //demand d'action
    printf("\033[34m");
    printf("Entre votre action:");
    printf("\033[0m");
    scanf("%d",&x);
    //switch poue chaque case
    switch(x){
        case 1 :{
            //ajouter un livre
            printf("entre le nom de livre :\n");
            scanf("%s",&titres[n]);

            printf("entre le nom de lauteur :\n");
            scanf("%s",&auteurs[n]);

            printf("entre le prix de livre :\n");
            scanf("%f",&prix[n]);

            printf("entre quantite:\n");
            scanf("%d",&quantite[n]);

            n++;
            break;
            }
        case 2 :{
            //affichage des information pour un livre
            printf("\033[32m");
            printf ("+--------+---------+------+--------+\n");
            printf("\033[0m");
            printf ("| Titre  | Auteur  | Prix |Quantite| \n");
            for(i=0;i<n;i++){

            printf("   %s       %s      %.2f    %d\n",titres[i],auteurs[i],prix[i],quantite[i]);
            }
            printf ("+--------+---------+------+--------+\n");
            break;
        }
        case 3 :{
            //recherch pour un livre
            printf("entre le titre de livre:");
            scanf("%s",&titre2);
            for(i=0;i<n;i++){
                if(strcmpi(titres[i],titre2)==0){
                        printf("titre = %s\n",titres[i]);
                        printf("auteurs = %s\n",auteurs[i]);
                        printf("prix = %s\n",prix[i]);
                        printf("quantite = %s\n",quantite[i]);
                        }


            }

            break;
        }
        case 4 :{
            //modification de quantite pour un livre
            printf("quel livre souhaitez vous modife ?:");
            scanf("%s",&titre2);
            printf("entre la nouvel quantite :");
            scanf("%d",&nq);

            for(i=0;i<n;i++){
            if(strcmp(titre2,titres[i])==0){
                        quantite [i] = nq;
                        printf("quantite = %d\n",quantite[i]);

            }
            }
            break;
            }





        case 5 :{
            //supprimer un livre
            printf("quel livre souhaitez-vous supprimer?: ");
            scanf("%s",&titre2);
            for(i=0;i<n;i++){
                if(strcmp(titre2,titres[i])==0){
                    t = i;
                    for(t;t<n;t++){
                        strcpy(titres[t],titres[t+1]);
                    }
                    for(t;t<n;t++){
                        strcpy(auteurs[t],auteurs[t+1]);
                    }
                    for(t;t<n;t++){
                        prix[t]=prix[t+1];
                    }
                    for(t;t<n;t++){
                        quantite[t]=quantite[t+1];
                    }
                    n--;
                    break;


                }
            }
            break;

        }
        case 6 : {
            //afficher quantite d'un livre
            printf("\033[0;33m");
            printf("le quantite de livres c'est : %d livres\n",n);
            printf("\033[0m");
            break;

        }
        default:{
            printf("\033[0;31m");
            printf("entre un valide numbre\n");
            printf("\033[0m");

        }

    }



}while(x!=0);







    return 0;
}
