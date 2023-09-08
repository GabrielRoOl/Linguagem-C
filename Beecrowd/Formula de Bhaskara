#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, DELTA, r1, r2;
    scanf("%lf %lf %lf", &a, &b, &c);
    DELTA = (b * b) - (4 * a * c);
    if(DELTA < 0 || a == 0){
        printf("Impossivel calcular\n");
    } else {
        r1 = (-b + sqrt(DELTA)) / (2 * a);
        r2 = (-b - sqrt(DELTA)) / (2 * a);
        printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    }
    
    return 0;
}
