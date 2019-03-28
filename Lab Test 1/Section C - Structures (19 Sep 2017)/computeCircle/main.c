#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct circle {
    double radius;
    double x;
    double y;
};
int intersect(struct circle c1, struct circle c2);
int contain(struct circle *c1, struct circle *c2);

int main() {
    struct circle c1, c2;

    printf("Enter circle 1 (radius x y): \n");
    scanf("%lf %lf %lf", &c1.radius, &c1.x, &c1.y);

    printf("Enter circle 2 (radius x y): \n");
    scanf("%lf %lf %lf", &c2.radius, &c2.x, &c2.y);
    printf("intersect(): %d\n", intersect(c1, c2));
    printf("contain(): %d\n", contain(&c1, &c2));

    return 0;
}

int intersect(struct circle c1, struct circle c2) {

    if(sqrt(pow(c1.x-c2.x,2)+pow(c1.y-c2.y,2)) <= c1.radius+c2.radius){
        return 1;
    }else{
        return 0;
    }
}

int contain(struct circle *c1, struct circle *c2) {
    if(c1->radius >= c2->radius + sqrt(pow(c1->x-c2->x,2)+pow(c1->y-c2->y,2)) ){
        return 1;
    }else{
        return 0;
    }
}
