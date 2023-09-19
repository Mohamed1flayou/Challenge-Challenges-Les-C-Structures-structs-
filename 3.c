#include <stdio.h>
#include <math.h>

typedef struct {
    char name[20];
    float sal_hour;
    int hour;
}salary;
 
int main (){
    float salaire;
    salary s;
    printf("enter the salary name :: ");
    scanf("%s", s.name);

    printf ("Enter the hour price :: ");
    scanf("%f", &s.sal_hour);

    printf("enter how much hour you work :: ");
    scanf ("%d", &s.hour);

    salaire = s.hour*s.sal_hour;

    printf("\nsalary name: \t %s\n", s.name);
    printf("Salaire : \t%.2f \n", salaire);




    return  0;
}