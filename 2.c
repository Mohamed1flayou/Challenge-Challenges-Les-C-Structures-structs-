#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
}point;

int main (){

    double dist;

    point p1, p2;
    printf("Enter x1 y1 of point 1: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Enter x2 y2 of point 2: ");
    scanf("%d %d", &p2.x, &p2.y);

    dist = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));

    printf("THE DISTANCE IS: %lf\n", dist); 



    return 0;
}