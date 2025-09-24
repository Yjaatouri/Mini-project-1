#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n=0,i,j,y,x=0,nq,t;
    char titre2 [25];
    char titres[100][50];
    char auteurs[100][50];
    float prix[100];
    int quantite[100];
    do{
    printf("=============================================\n");
    printf("*1 Pour ajouter un livre*\n");
    printf("*2 Pour afficher tous les livre disponible*\n");
    printf("*3 Rechercher un livre par son titre*\n");
    printf("*4 Mettre a jour la quantite d'un livre*\n");
    printf("*5 Supprimer un livre du stock*\n");
    printf("*6 Afficher le nombre total de livres en stock*\n");
    printf("*0 pour quiter le program!!\n");
    printf("==============================================\n");


    printf("Entre votre action:");
    scanf("%d",&x);

    switch(x){
        case 1 :{

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
            printf ("+--------+---------+------+--------+\n");
            printf ("| Titre  | Auteur  | Prix |Quantite| \n");
            for(i=0;i<n;i++){

            printf("   %s       %s      %.2f    %d\n",titres,auteurs,prix,quantite);
            }
            printf ("+--------+---------+------+--------+\n");
            break;
        }
        case 3 :{
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
            printf("quel livre souhaitez vous modife ?:");
            scanf("%s",&titre2);
            printf("entre la nouvel quantite :");
            scanf("%d",&nq);

            for(i=0;i<n;i++){
            if(strcmp(titre2,titres[i])==0){
                        t = quantite[i];
                        nq = t;
                        quantite [i] = nq;
                        printf("quantite = %d\n",quantite[i]);

            }
            }
            break;
            }





        case 5 :{
            break;

        }
        case 6 : {
            printf("\033[0;33m");
            printf("le quantite de livres c'est : %d livres\n",n);
            printf("\033[0m");
            break;

        }
        default:{

        }

    }



}while(x!=0);







    return 0;
}
