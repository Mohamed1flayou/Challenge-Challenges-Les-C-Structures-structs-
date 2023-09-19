#include <stdio.h>
#include <stdlib.h>

struct car {
  char Nom[50];
  int age;
};

int main() {

    struct car s1 ;


    printf("entrer la valeur du Nom:");
    scanf("%s",&s1.Nom);

    printf("entrer la valeur du age:");
    scanf("%d",&s1.age);

    printf("%s %d",s1.Nom,s1.age);

    return 0;
}
