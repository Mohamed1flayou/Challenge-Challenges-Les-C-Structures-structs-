
#include <stdio.h>
#include <stdlib.h>

struct car {
  char Nom[50];
  int age;
};

int main() {
    int i ;
    struct car T[50];

    for(i=0;i<5;i++){
        printf("entrer la valeur du Nom:");
        scanf("%s",&T[i].Nom);
        printf("entrer la valeur du age:");
        scanf("%d",&T[i].age);
        printf("\t\t\t etudient ajoute\n ");
    }
    printf("\t\tlist des etudion\n");
    for(i=0;i<5;i++){
     printf("\tNom:%s age:%d\n",T[i].Nom,T[i].age);

}

    return 0;
}
